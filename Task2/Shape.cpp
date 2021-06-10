#include "header.h"

Shape::Shape() {
  color = "None";
}

void Shape::getColor() {
  cout << "Enter color: ";
  cin >> color;
}