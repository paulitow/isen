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
    : width(width), height(height) {
  image.resize(width * height);//taille image finale redimensionné

}

Drawing::~Drawing() {}//déclaration destructeur de la classe

/* Save image to file "filename" */
void Drawing::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {//compare l'extension de filename au format bmp
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

 // createTestImage();// exemple image
  
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());//(TESTER avec >1) . remplissage du filename avec la forme --> forme.data()
}



void Drawing::drawFigure( int widthF,int heightF, int posX , int posY) {

  forme = figureList[0]->getBuffer();//un tableau de vecteur de char prends les valeurs de la 1ère forme de la liste
  //widthF = figureList[0]->getWidth();
  //heightF = figureList[0]->getHeight();
           //std::cout << static_cast<int>(forme.at(0)) << " AIe " << std::endl;

  for(int line=posY; line<posY+heightF; line++) {
      for(int col=posX; col<posX+widthF; col++) {
         std::cout << static_cast<int>(forme.at((line-posY)*widthF + (col-posX))) << " Aie " << std::endl;
        image.at(line*width + col ) = forme[(line-posY)*widthF + (col-posX)];
      }
  }
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|
/* Set every point of the image to 0 */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++) {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage() {
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j * width + i] = (i + j) % 256;
    }
  }
}

void Drawing::addFigure(Figure *figure) {

  figureList.push_back(figure);
}
