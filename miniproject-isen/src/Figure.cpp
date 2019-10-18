#include "Drawing.h"
#include "Cross.h"
//#include "Square.h"
#include <iostream>
#include <stdlib.h>




class Figure {
    public:
    Figure(const int width, const int height) : width(width), height(height) {
        buffer = new int[width*height];
        clearBuffer();
    }
    
    ~Figure() {
        if(buffer != nullptr) {
            delete buffer;
        }
    }
    
    bool setPoint(const int col, const int line) {
        if(col<0 || col>=width || line<0 || line>=height) {
            return false;
        } 
        buffer[line * width + col] = 1;
        return true;
    }
        
    bool clearPoint(const int col, const int line) {
        if(col<0 || col>=width || line<0 || line>=height) {
            return false;
        }
        buffer[line * width + col] = 0;
        return true;
    }

    void SetLine(const int line)
    {
        for(int i = 0; i < width; i++)
        {
            setPoint(i, line);
        }
    }

    void SetColumn(const int col)
    {
        for(int i = 0; i < height; i++)
        {
            setPoint(col, i);
        }
    }
        
    virtual void draw() {
        for(int line=0; line<height; line++) {
            for(int col=0; col<width; col++) {
                std::cout << buffer[line * width + col] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
          
    protected:
    int *buffer;
    
    void clearBuffer() {
        for(int line=0; line<height; line++) {
            for(int col=0; col<width; col++) {
                buffer[line * width + col] = 0;
            }
        }
    }
    
    int width;
    int height;
};





