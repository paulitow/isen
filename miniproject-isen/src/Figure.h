#ifndef FIGURE_H
#define FIGURE_H


#include <string>
#include <vector>



class Figure {
public:
    Figure(const int width, const int height);
    ~Figure();
    bool setPoint(const int col, const int line);
    bool clearPoint(const int col, const int line);
    void SetLine(const int line);
    void SetColumn(const int col);
    virtual void draw();

protected:
    void clearBuffer();
    
    
private:
       
    const int width;
    const int height;
    std::vector<char> forme; 
};
#endif