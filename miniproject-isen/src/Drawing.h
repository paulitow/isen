#ifndef DRAWING_H
#define DRAWING_H
#include "Figure.h"
#include <string>
#include <vector>

class Drawing {
public:
  Drawing(const int width, const int height, const int widthF, const int heightF);
  ~Drawing();

  void save(std::string filename);
  void addFigure(Figure *figure);
  void drawFigure();

private:
  void clearImage();
  void createTestImage();


private:
  const int width;
  const int height;
  const int widthF;
  const int heightF;

  std::vector<char> image;
  const std::vector<char> &forme;
  std::vector<Figure*> figureList;
};

#endif /* DRAWIN_H */
