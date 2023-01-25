#pragma once
#include "ECS.hpp"
#include "PositionComponent.hpp"
#include "SpriteComponent.hpp"

// class PositionComponent : public Component
// {
//     private:
//         int x_pos;
//         int y_pos;

//     public:

//         int x() {return x_pos; }
//         int  y() {return y_pos; }

//         void init() override
//         {
//             x_pos = 0;
//             y_pos = 0;
//         }

//         void update() override
//         {
//             x_pos++;
//             y_pos++;
//         }

//         void setPos(int x,int y)
//         {
//             x_pos = x;
//             y_pos = y;
//         }
    
// };