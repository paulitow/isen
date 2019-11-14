#include <iostream>
#include <string>
#include "Figure.h"
#include "Cross.h"
#include "Square.h"
#include "Rectangle.h"
#include "Drawing.h"

const int width = 300;
const int height = 400;
const int widthF = 70;
const int heightF = 100;
int posX= 40;
int posY= 90;

int main(int argc, char **argv) {

  Figure Ligne(widthF, heightF);
  Drawing draw(width, height);
  draw.addFigure(new Cross(widthF, heightF));
 // Ligne.getBuffer();
  draw.drawFigure(widthF, heightF,  posX , posY);
  draw.save(std::string("Cross.bmp"));

  /*Figure Ligne(widthF, heightF);
  Ligne.SetLine(heightF);
  Ligne.save("Ligne.bmp");
  Ligne.clearBuffer();*/

//Menu menu;

//menu.run();
  return 0;
}
