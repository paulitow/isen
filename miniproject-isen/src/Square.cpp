#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Rectangle.h"
#include "Square.h"

Square::Square(const int size) : Rectangle(size, size) {

  new Rectangle(size, size); //The int variable size is used according to the variables width & height
}

Square::~Square() {}