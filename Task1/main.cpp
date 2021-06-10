#include "header.h"

void search (vector<Tree> forest, string &name) {
  int n;
  for (auto &i: forest) {
    n = i.getNeighbours(name);
    if (n != -1) {
      cout << "Total neighbours: " << n << endl;
      break;
    }
  }
  if (n == -1) cout << "Not found!" << endl;
}

int main() {
  vector<Tree> forest;
  for (int i = 0; i < 5; i++) {
    cout << "Tree #" << i + 1 << ": ";
    forest.emplace_back();
  }
  string name;
  while (true) {
    cout << "Enter name: ";
    cin >> name;
    if (name == "exit") {
      cout << "Goodbye!";
      break;
    } else search(forest, name);
  }
  return 0;
}