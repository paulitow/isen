#include "Drawing.h"
#include "Rectangle.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"


Rectangle::Rectangle(const int width, const int height)
  : Figure(width, height) {

    SetLine(0); //These Figure methods are modified to draw a rectangle
    SetLine(height-1);

    SetColumn(0);
    SetColumn(width-1);

    
}

Rectangle::~Rectangle() {

  clearBuffer();
}
