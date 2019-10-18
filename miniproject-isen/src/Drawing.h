#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>

class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);

private:
  void clearImage();
  void createTestImage();

private:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* DRAWIN_H */