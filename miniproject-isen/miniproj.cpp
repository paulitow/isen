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
  

  int choice;
  while (1){
    std::cout << "Menu\n";
    std::cout << "What figure do you want to create?\n";
    std::cout << "1 - Cross\n";
    std::cout << "2 - Square\n";
    std::cout << "3 - Rectangle\n";
    std::cout << "4 - Quit\n";
    std::cout << "5 - Save the figure\n";
    std::cout << "Selection: ";
    std::cin >> choice;
    switch(choice) {
      case 1:
        std::cout << "Adding a Cross! Which position X ? :\n";
        std::cin >> posX;
        std::cout << "Which position Y ? :\n";
        std::cin >> posY;
        Cross * c;
        c = new Cross(widthF, heightF);
        draw.addFigure(c);
        draw.drawFigure(widthF, heightF,  posX , posY);
        delete c;
        
        break;

      case 2:
       std::cout << "Adding a Square! Which position X ? :\n";
        std::cin >> posX;
        std::cout << "Which position Y ? :\n";
        std::cin >> posY;
        Square * s;
        s = new Square(heightF);
        draw.addFigure(s);
        draw.drawFigure(heightF, heightF,  posX , posY);
        delete s;
        break;

      case 3:
        std::cout << "Adding a Rectangle! Which position X ? :\n";
        std::cin >> posX;
        std::cout << "Which position Y ? :\n";
        std::cin >> posY;
        Rectangle * r;
        r = new Rectangle(widthF, heightF);
        draw.addFigure(r);
        draw.drawFigure(widthF, heightF,  posX , posY);
        delete r;
        break;

      case 4:
        std::cout << "Goodbye!";
        return 0;
        break;

      case 5:
        std::cout << "ENREGISTREMENT....";
        
        draw.save(std::string("PAULITOW.bmp"));
      default:
        break;
    }

  }
  
  
 // Ligne.getBuffer();
  

  /*Figure Ligne(widthF, heightF);
  Ligne.SetLine(heightF);
  Ligne.save("Ligne.bmp");
  Ligne.clearBuffer();*/

//Menu menu;

//menu.run();
  return 0;
}
