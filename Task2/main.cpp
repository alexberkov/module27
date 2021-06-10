#include "header.h"

int main() {
  string s;
  while (true) {
    cout << "Enter shape type: ";
    cin >> s;
    if (s == "exit") {
      cout << "Goodbye!";
      break;
    } else if (s == "circle") {
      Circle C;
      cout << "Circle area: " << C.area() << endl;
      C.zone().show();
    } else if (s == "square") {
      Square S;
      cout << "Square area: " << S.area() << endl;
      S.zone().show();
    } else if (s == "rectangle") {
      Rectangle R;
      R.center.getPoint();
      R.getColor();
      R.getSize();
      cout << "Rectangle area: " << R.area() << endl;
      R.show();
    } else if (s == "triangle") {
      Triangle T;
      cout << "Triangle area: " << T.area() << endl;
      T.zone().show();
    } else cout << "Incorrect shape! Try again." << endl;
  }
  return 0;
}
