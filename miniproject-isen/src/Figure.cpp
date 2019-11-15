#include "Drawing.h"
#include <iostream>
#include <stdlib.h>
#include <stb_image_write.h>
#include <stdexcept>
#include "Figure.h"

Figure::Figure(const int width, const int height)
    : width(width), height(height) { //This is the constructor of Figure class 

    forme.resize(width * height);//create an unsigned char table of size width*height
    clearBuffer();// put values of the table to 0 --> black color
}

Figure::~Figure() {} //This is the deconstructor of Figure class

bool Figure::setPoint(const int col, const int line) { //Create a 255 intensity point for the desired figure

    if (col < 0 || col >= width || line < 0 || line >= height) {

        return false;
    }
    forme[line * width + col] = 255;
    return true;
}

bool Figure::clearPoint(const int col, const int line) { //This is a unused method of Figure class, it erases point of the figure

    if (col < 0 || col >= width || line < 0 || line >= height) {

        return false;
    }
    forme[line * width + col] = 0;
    return true;
}

void Figure::SetLine(const int line) { //This method uses setPoint method to draw a line

    for (int i = 0; i < width; i++) {

        setPoint(i, line);
    }
}

void Figure::SetColumn(const int col) { //This method uses setPoint method to draw a column

    for (int i = 0; i < height; i++) {

        setPoint(col, i);
    }
}

void Figure::clearBuffer() { //This method is called to write black color (0) to clear the figure

    for (int line = 0; line < height; line++)
    {
        for (int col = 0; col < width; col++)
        {
            forme[line * width + col] = 0;
        }
    }
}


std::vector<unsigned char> Figure::getBuffer() //permit to extract an unsigned char vector from a list of vectors Figure
{

    return forme;
}
