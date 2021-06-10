#include "header.h"

double Rectangle::area() const {
  return width * height;
}

void Rectangle::getSize() {
  cout << "Enter width and height: ";
  cin >> width >> height;
}

Rectangle::Rectangle() {
  width = 0;
  height = 0;
}

Rectangle::Rectangle(Point c, double w, double h) {
  center = c;
  width = w;
  height = h;
}

void Rectangle::show() {
  Point A(center.x - width / 2 , center.y - height / 2 );
  Point B(center.x + width / 2 , center.y + height / 2);
  cout << "Figure zone: ";
  A.showPoint();
  B.showPoint();
  cout << endl;
}