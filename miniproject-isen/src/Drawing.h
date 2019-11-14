#ifndef DRAWING_H
#define DRAWING_H
#include "Figure.h"
#include <string>
#include <vector>

class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);
  void addFigure(Figure *figure);
  void drawFigure(int widthF, int heigthF, int posX , int posY);

private:
  void clearImage();
  void createTestImage();

public:
  int widthF;
  int heightF;
  int posX;
  int posY;

private:
  const int width;
  const int height;

  

  std::vector<unsigned char> image;
  std::vector<unsigned char> forme;
  std::vector<Figure*> figureList;
};

#endif /* DRAWIN_H */
