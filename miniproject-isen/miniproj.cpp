#include <iostream>
#include <string>
#include "Figure.h"
#include "Cross.h"
#include "Square.h"
#include "Rectangle.h"
#include "Drawing.h"
#include "Menu.h"

//Declaration of variables
const int width = 300;
const int height = 400;
int widthF = 70;
int heightF = 100;
int posX = 90;
int posY = 90;


//Main function where a declared menu is calling class methods
int main(int argc, char **argv) {

  Figure Ligne(widthF, heightF);
  Drawing draw(width, height);

  int choice;
  while (1)  {

    std::cout << "Menu\n";
    std::cout << "What figure do you want to create?\n";
    std::cout << "1 - Cross\n";
    std::cout << "2 - Square\n";
    std::cout << "3 - Rectangle\n";
    std::cout << "4 - Quit\n";
    std::cout << "5 - Save the figure\n";
    std::cout << "Selection: ";
    std::cin >> choice;
    switch (choice) //Different selection depending of the value of int choice (user command line)
    {
    case 1: //This case create a personalized cross using Cross and Figure classes
      std::cout << "Adding a Cross! Which position X? :\n";
      std::cin >> posX;
      std::cout << "Which position Y? :\n";
      std::cin >> posY;
      std::cout << "Which Widht? :\n";
      std::cin >> widthF;
      std::cout << "Which Height? :\n";
      std::cin >> heightF;
      if (posX + widthF >= width || posY + heightF >= height) { //This special function advertise the user that position or size is out of range

        std::cout << "Out of range sorry!\n";
      }
      else {

        Cross *c;
        c = new Cross(widthF, heightF);
        draw.addFigure(c);
        draw.drawFigure(widthF, heightF, posX, posY);
        delete c;
      }
      break;

    case 2: //This case create a personalized square using Square and Figure classes
      std::cout << "Adding a Square! Which position X? :\n";
      std::cin >> posX;
      std::cout << "Which position Y? :\n";
      std::cin >> posY;
      std::cout << "Which size? :\n";
      std::cin >> heightF;
      if (posX + heightF >= width || posY + heightF >= height) {  //This special function advertise the user that position or size is out of range

        std::cout << "Out of range sorry! \n";
      }
       else {

        Square *s;
        s = new Square(heightF);
        draw.addFigure(s);
        draw.drawFigure(heightF, heightF, posX, posY);
        delete s;
      }
      break;

    case 3: //This case create a personalized rectangle using Rectangle  and Figure classes
      std::cout << "Adding a Rectangle! Which position X? :\n";
      std::cin >> posX;
      std::cout << "Which position Y? :\n";
      std::cin >> posY;
      std::cout << "Which Widht? :\n";
      std::cin >> widthF;
      std::cout << "Which Height? :\n";
      std::cin >> heightF;
      if (posX + widthF >= width || posY + heightF >= height) {

        std::cout << "Out of range sorry! \n";
      }
      else { //This special function advertise the user that position or size is out of range
        Rectangle *rect;
        rect = new Rectangle(widthF, heightF);
        draw.addFigure(rect);
        draw.drawFigure(widthF, heightF, posX, posY);
        delete rect;
      }
      break;

    case 4: //Quit the program
      std::cout << "\nGoodbye!\n";
      return 0;
      break;

    case 5: //that function draw the desired figures in the BMP image file
      std::cout << "\nENREGISTREMENT....\n";

      draw.save(std::string("image.bmp"));
    default:
      break;
    }
  }
  
  return 0;
}
