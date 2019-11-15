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
int widthF = 0;  //width Figure
int heightF = 0; //height Figure
int posX = 0;
int posY = 0;

//Main function where a declared menu is calling class methods
int main(int argc, char **argv)
{

  Figure Ligne(widthF, heightF);
  Drawing draw(width, height);

  int choice, choice2;
  char prechoice[1];
  while (1)
  {

    std::cout << "\n\n-----------------MENU----------------------\n\n";
    std::cout << "What figure do you want to create?\n";
    std::cout << "1 - Cross\n";
    std::cout << "2 - Square\n";
    std::cout << "3 - Rectangle\n";
    std::cout << "4 - Quit\n";
    std::cout << "\n-----------------MENU----------------------\n\n";
    std::cout << "Selection: ";
    std::cin >> prechoice;
    choice = atoi(prechoice);       //secure the input for no char. We only want int !
    if (choice != 0 && choice <= 4) // and int beetween 1 and 4 !
    {
      switch (choice) //Different selection depending of the value of int choice (user command line)
      {
      case 1: //This case create a personalized cross using Cross and Figure classes
        std::cout << "Adding a Cross! Which position X? :\n";
        std::cin >> posX;
        std::cout << "Which position Y? :\n";
        std::cin >> posY;
        std::cout << "Which Width? :\n";
        std::cin >> widthF;
        std::cout << "Which Height? :\n";
        std::cin >> heightF;
        if (posX + widthF >= width || posY + heightF >= height)
        { //This condition advertise the user that position and size together are not permitted

          std::cout << "Out of range sorry! the figure must be printed entirely and not partially in the image\n";
        }
        else
        {

          Cross *c;
          c = new Cross(widthF, heightF);               //create new class Cross
          draw.addFigure(c);                            //put the figure Cross in a list of vector
          draw.drawFigure(widthF, heightF, posX, posY); //write the figure at a position in the image
          delete c;
          std::cout << "\n Saving...\n";
          draw.save(std::string("image.bmp")); //Save The image
        }
        break;

      case 2: //This case create a personalized square using Square and Figure classes
        std::cout << "Adding a Square! Which position X? :\n";
        std::cin >> posX;
        std::cout << "Which position Y? :\n";
        std::cin >> posY;
        std::cout << "Which size? :\n";
        std::cin >> heightF;
        if (posX + heightF >= width || posY + heightF >= height)
        { //This special function advertise the user that position or size is out of range

          std::cout << "Out of range sorry! \n";
        }
        else
        {

          Square *square;
          square = new Square(heightF);
          draw.addFigure(square);
          draw.drawFigure(heightF, heightF, posX, posY);
          delete square;
          std::cout << "\n Saving...n";
          draw.save(std::string("image.bmp"));
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
        if (posX + widthF >= width || posY + heightF >= height)
        {

          std::cout << "Out of range sorry! \n";
        }
        else
        { //This special function advertise the user that position or size is out of range
          Rectangle *rect;
          rect = new Rectangle(widthF, heightF);
          draw.addFigure(rect);
          draw.drawFigure(widthF, heightF, posX, posY);
          delete rect;
          std::cout << "\n Saving....\n";
          draw.save(std::string("image.bmp"));
        }
        break;

      case 4: //Quit the program
        std::cout << "\nGoodbye!\n";
        return 0;
        break;

      default: //Default loop if given digits are wrong. Re-ask user for number.
        break;
      }
    }
    else
    {
      std::cout << "Saisie éronnée !";
    }
  }

  return 0;
}
