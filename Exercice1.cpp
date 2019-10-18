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

class Cross : public Figure
{
    public:
    Cross(const int width, const int height) : Figure(width, height)
    {
        SetLine(height/2);
        SetColumn(width/2);
    }

    ~Cross()
    {
        clearBuffer();
    }

    void draw()
    {
        std::cout << "Cross : " << std::endl;
        Figure::draw();
    }

};

class Rectangle : public Figure
{
public:
    Rectangle(const int width, const int height) : Figure(width, height)
    {
        SetLine(0);
        SetLine(height-1);

        SetColumn(0);
        SetColumn(width-1);
    }

    ~Rectangle()
    {
        clearBuffer();
    }

    virtual void draw()
    {
        std::cout << "Rectangle : " << std::endl;
        Figure::draw();
    }
};

class Square : public Rectangle
{
    public:
    Square(const int size) : Rectangle(size, size)
    {

    }

    ~Square()
    {

    }
    
    void draw()
    {
        std::cout << "Square : " << std::endl;
        Figure::draw();
    }
};

int main()
{
    Square s = Square(12);
    s.draw();

    Cross c = Cross(11, 11);
    c.draw();

    Figure * tab[3];

    tab[0] = new Cross(11,11);
    tab[1] = new Rectangle(11, 11);
    tab[2] = new Square(11);

    for(int i = 0; i < 3; i++)
    {                
        tab[i]->draw();
    }
}