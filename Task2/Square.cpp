#include "header.h"

Square::Square() {
  center.getPoint();
  this->getColor();
  cout << "Enter side: ";
  cin >> side;
}

double Square::area() const {
  return side * side;
}

Rectangle Square::zone() const {
  return Rectangle(center, side, side);
}

