#include <iostream>
#include <string>
#include "Figure.h"
#include "Cross.h"
#include "Square.h"
#include "Rectangle.h"
#include "Drawing.h"
#include "Menu.h"

const int width = 300;
const int height = 400;
const int widthF = 70;
const int heightF = 100;
int posX= 90;
int posY= 90;

int main(int argc, char **argv) {
  Figure Ligne(widthF, heightF);
  Drawing draw(width, height);
  //DisplayMenu();

  int choice;
  std::cin >> choice;
  switch(choice) {
    case 1:
      std::cout << "A Cross!\n";
      draw.addFigure(new Cross(widthF, heightF));
      break;

    case 2:
      std::cout << "A Square!\n";
      
      break;

    case 3:
      std::cout << "A Rectangle!\n";
      
      break;

    case 4:
      std::cout << "Goodbye!";
      system("exit");
      break;

    default:
      break;
  }
  
  
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
