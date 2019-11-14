#ifndef FIGURE_H
#define FIGURE_H


#include <string>
#include <vector>



class Figure {
  public:
    Figure( const int width, const int height);
    ~Figure();
    bool setPoint(const int col, const int line);
    bool clearPoint(const int col, const int line);
    void SetLine(const int line);
    void SetColumn(const int col);
    void save(std::string filename);
    void draw();

    void getWidth();
    void getHeight();
    std::vector<char> getBuffer();

    void clearBuffer();

   std::vector<char> forme;
//const std::vector<char> &forme;
    const int width;
    const int height;
};
#endif
