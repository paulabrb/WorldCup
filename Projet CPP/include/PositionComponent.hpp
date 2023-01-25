#pragma once
#include "Components.hpp"

class PositionComponent : public Component
{
    private:
        int x_pos;
        int y_pos;

    public:


        // set default position
        PositionComponent()
        {
            x_pos = 0;
            y_pos = 0;
        }
        //set default value
        PositionComponent(int x,int y)
        {
            x_pos = x;
            y_pos = y;
        }



        int x() {return x_pos; }
        int  y() {return y_pos; };

        void x(int x){ x_pos = x;}
        void y(int y){ y_pos = y;}

        // void init() override
        // {
        //     x_pos = 0;
        //     y_pos = 0;
        // }

        void update() override
        {
            x_pos++;
            y_pos++;
        }

        void setPos(int x,int y)
        {
            x_pos = x;
            y_pos = y;
        }
    
};