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
  double x = center.getPoint().first, y = center.getPoint().second;
  Point A(x - width / 2 , y - height / 2 );
  Point B(x + width / 2 , y + height / 2);
  cout << "Figure zone: ";
  A.showPoint();
  B.showPoint();
  cout << endl;
}

void Rectangle::setCenter() {
  center.setPoint();
}