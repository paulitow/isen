#ifndef CROSS_H
#define CROSS_H


#include <string>
#include <vector>

class Cross {
  public:
    Cross(const int width, const int height);
    ~Cross();
    void draw();

  private:
    const int width;
    const int height;
    std::vector<char> croix;

};
#endif
