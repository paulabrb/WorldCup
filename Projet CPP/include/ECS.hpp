#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <bitset>
#include <array>

class Component;
class Entity;

using ComponentID = std::size_t;

inline ComponentID getComponentTypeID()
{
    static ComponentID lastID = 0;
    //Increment each time we run
    return lastID++; 
}

//Depends on the type of the component
template <typename T> inline ComponentID getComponentTypeID() noexcept
{
    static ComponentID typeID = getComponentTypeID();
    return typeID;

}

constexpr std::size_t maxComponents = 32;

using ComponentBitSet = std::bitset<maxComponents>;
using ComponentArray = std::array<Component*,maxComponents>;


class Component
{
    public:
    Entity* entity;

    virtual void init() {}
    virtual void update() {}
    virtual void draw() {}
    virtual ~Component() {}

};


class Entity
{
    private:
        bool active= true;
        std::vector<std::unique_ptr<Component>> components;

        ComponentArray componentArray;
        ComponentBitSet componentBitSet;
    public:
        void update()
        {
            //for each component
            for(auto& comp : components)comp->update();
            for(auto& comp :components)comp->draw();
        }
        void draw() {}
        bool isActive() const {return active; }
        //remove components from the Game
        void destroy() {active = false;}

        template <typename T> bool hasComponent() const
        {
            return componentBitSet[getComponentTypeID<T>()];
        }

        //Add component to an entity
        template <typename T, typename... TArgs>
        T& addComponent(TArgs&&... mArgs)
        {
            T* comp(new T(std::forward<TArgs>(mArgs)...));
            comp->entity = this;
            std::unique_ptr<Component> uPtr{ comp };
            components.emplace_back(std::move(uPtr));

            componentArray[getComponentTypeID<T>()] = comp;
            componentBitSet[getComponentTypeID<T>()] = true;

            comp->init();
            return *comp;

        }

        template<typename T> T& getComponent() const
        {
            auto ptr(componentArray[getComponentTypeID<T>()]);
            return *static_cast<T*>(ptr);

        }

};

class Manager
{
    private:
        std::vector<std::unique_ptr<Entity>> entities;
    public:
        void update()
        {
            //for each entity
            for(auto& ent : entities) ent->update();

        }
        void draw()
        {
            for(auto& ent : entities) ent->draw();
        }
        void refresh()
        {
            //remove entities if they are not active
            entities.erase(std::remove_if(std::begin(entities),std::end(entities),[](const std::unique_ptr<Entity> &mEntity)
                {
                    return !mEntity->isActive();
                }),
                std::end(entities));

        }
        Entity& addEntity()
        {
            Entity* ent = new Entity();
            std::unique_ptr<Entity> uPtr{ ent };
            entities.emplace_back(std::move(uPtr));
            return *ent;
        }

};