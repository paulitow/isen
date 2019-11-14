#include <iostream>
#include <stdlib.h>
#include <string>

#include "Menu.h"

Menu::Menu(){

}



void Menu::DisplayMenu() {

  std::cout << "Menu\n";
  std::cout << "What figure do you want to create?\n";
  std::cout << "1 - Cross\n";
  std::cout << "2 - Square\n";
  std::cout << "3 - Rectangle\n";
  std::cout << "4 - Quit\n";
  std::cout << "Selection: ";
}