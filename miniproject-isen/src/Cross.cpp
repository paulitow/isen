#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"


class Cross : public Figure
{
    public:
    Cross(const int width, const int height) : Figure(width, height)
    {
        SetLine(height/2);
        SetColumn(width/2);
    }

    ~Cross()
    {
        clearBuffer();
    }

    void draw()
    {
        std::cout << "Cross : " << std::endl;
        Figure::draw();
    }

};