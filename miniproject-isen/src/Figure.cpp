#include "Drawing.h"
//#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include "Cross.h"
//#include "Square.h"
#include <iostream>
#include <stdlib.h>
#include <stb_image_write.h>
#include <stdexcept>
#include "Figure.h"




Figure::Figure(const int width, const int height)
  : width(width), height(height) {
        forme.resize(width*height);
        clearBuffer();
    }

Figure::~Figure() {}

bool Figure::setPoint(const int col, const int line) {
        if(col<0 || col>=width || line<0 || line>=height) {
            return false;
        }
        forme[line * width + col] = 1;
        return true;
    }

    bool Figure::clearPoint(const int col, const int line) {
        if(col<0 || col>=width || line<0 || line>=height) {
            return false;
        }
        forme[line * width + col] = 0;
        return true;
    }

    void Figure::SetLine(const int line)
    {
        for(int i = 0; i < width; i++)
        {
            setPoint(i, line);
        }
    }

    void Figure::SetColumn(const int col)
    {
        for(int i = 0; i < height; i++)
        {
            setPoint(col, i);
        }
    }

    void Figure::draw() {
        for(int line=0; line<height; line++) {
            for(int col=0; col<width; col++) {
                std::cout << forme[line * width + col] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    /*void Figure::save(std::string filename) {

      if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
        throw std::runtime_error(
            "Figure ne supporte que l'enregistrement d'images au format bmp");
      }

      stbi_write_bmp(filename.c_str(), width, height, 1, forme.data());
    }*/

    void Figure::clearBuffer() {
        for(int line=0; line<height; line++) {
            for(int col=0; col<width; col++) {
                forme[line * width + col] = 0;
            }
        }
    }
