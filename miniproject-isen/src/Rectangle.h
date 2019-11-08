#ifndef RECTANGLE_H
#define RECTANGLE_H


#include <string>
#include <vector>
#include "Figure.h"

class Rectangle : public Figure {
    public:
        Rectangle(const int width, const int height);
        ~Rectangle();
        void draw();
};
#endif
