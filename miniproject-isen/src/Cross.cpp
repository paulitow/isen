#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include "Figure.h"
#include "Cross.h"

Cross::Cross(const int width, const int height)
    : Figure(width, height)
{
  SetLine(height / 2);//white line at the middle of the size of the Image Cross
  SetColumn(width / 2);
}

Cross::~Cross()
{

  clearBuffer();
}