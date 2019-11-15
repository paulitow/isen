#include "Drawing.h"
#include "Figure.h"
#include "Cross.h"
#include "Square.h"
#include "Rectangle.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include <iostream>
#include <stdlib.h>

//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height)
{
  image.resize(width * height); //taille image finale redimensionné
}

Drawing::~Drawing() {} //déclaration destructeur de la classe

/* Save image to file "filename" */
void Drawing::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") { //compare l'extension du filename au format bmp
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

  stbi_write_bmp(filename.c_str(), width, height, 1, image.data()); //write in the filename in black and white the data table in image 
}

void Drawing::drawFigure(int widthF, int heightF, int posX, int posY)
{

  forme = figureList[0]->getBuffer(); //A char vector table takes values of the first figure


  for (int line = posY; line < posY + heightF; line++)//figure is drawn at a position posX;posY
  {
    for (int col = posX; col < posX + widthF; col++)
    {
      
      if (static_cast<int>(image.at(line * width + col) != 255))// if the image is already colored with white color we don't change the pixel's intensity
      {
        image.at(line * width + col) = forme[(line - posY) * widthF + (col - posX)];//it place the same intensity color that in the figure at a given position 
      }
    }
  }
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|



void Drawing::addFigure(Figure *figure)
{

  figureList.push_back(figure);//put at the end of the Table figureList an unsigned char vector "form"
}
