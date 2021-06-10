#include "header.h"

Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(double a, double b) {
  x = a;
  y = b;
}

void Point::getPoint() {
  cout << "Enter center coordinates: ";
  cin >> x >> y;
}

void Point::showPoint() const {
  cout << "(" << x << ", " << y << ") " << endl;
}