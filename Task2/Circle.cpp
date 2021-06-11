#include "header.h"

Circle::Circle() {
  center.setPoint();
  this->getColor();
  cout << "Enter radius: ";
  cin >> radius;
}

Rectangle Circle::zone() const {
  return Rectangle(center, radius * 2, radius * 2);
}

double Circle::area() const {
  return M_PI * radius * radius;
}