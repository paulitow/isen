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

private:
  void clearImage();
  void createTestImage();


private:
  const int width;
  const int height;

  std::vector<char> image;
  std::vector<Figure*> figureList;
};

#endif /* DRAWIN_H */
