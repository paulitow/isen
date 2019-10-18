#include <iostream>
#include <string>

#include "Drawing.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  Drawing draw(width, height);

  draw.save(std::string("test_image.bmp"));

  return 0;
}