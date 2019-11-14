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

        draw.addFigure(new Cross(widthF, heightF));
        draw.drawFigure(widthF, heightF,  posX , posY);
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
