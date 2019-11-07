#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"


Cross::Cross(const int width, const int height)
  : Figure(width, height) {
        SetLine(height/2);
        SetColumn(width/2);
}

Cross::~Cross() {

  clearBuffer();
    }

void Cross::draw()  {

    std::cout << "Cross : " << std::endl;
    Figure::draw();
}
