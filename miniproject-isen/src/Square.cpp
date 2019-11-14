#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
//#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"

Square::Square(const int size) : Rectangle(size, size) {
new Rectangle(size,size);

}

Square::~Square() {}

void Square::draw() {

  std::cout << "Square : " << std::endl;
  Figure::draw();
}
