#include "header.h"

Triangle::Triangle() {
  center.setPoint();
  this->getColor();
  while (true) {
    cout << "Enter side: ";
    cin >> side;
    cout << "Enter support: ";
    cin >> support;
    if (side > support / 2) break;
    else cout << "Incorrect data! Try again." << endl;
  }
}

double Triangle::height() const {
  return sqrt(side * side - (support / 2) * (support / 2));
}

double Triangle::area() const {
  return this->height() * support * 0.5;
}

Rectangle Triangle::zone() const {
  return Rectangle(center, support, this->height());
}
