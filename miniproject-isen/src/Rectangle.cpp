#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"





class Rectangle : public Figure
{
public:
    Rectangle(const int width, const int height) : Figure(width, height)
    {
        SetLine(0);
        SetLine(height-1);

        SetColumn(0);
        SetColumn(width-1);
    }

    ~Rectangle()
    {
        clearBuffer();
    }

    virtual void draw()
    {
        std::cout << "Rectangle : " << std::endl;
        Figure::draw();
    }
};