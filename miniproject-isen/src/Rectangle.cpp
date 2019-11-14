#include "Drawing.h"
#include "Rectangle.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"


Rectangle::Rectangle(const int width, const int height)
  : Figure(width, height) {

    SetLine(0);
    SetLine(height-1);

    SetColumn(0);
    SetColumn(width-1);

    
}

Rectangle::~Rectangle() {

  clearBuffer();
}

void Rectangle::draw() {

  std::cout << "Rectangle : " << std::endl;
  Figure::draw();
}
