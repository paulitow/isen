#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
//#include "Figure.h"
#include "Rectangle.h"





class Square : public Rectangle {
    public:
    Square(const int size) : Rectangle(size, size)
    {

    }

    ~Square()
    {

    }
    
    void draw()
    {
        std::cout << "Square : " << std::endl;
        Figure::draw();
    }
};