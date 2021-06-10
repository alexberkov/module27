#include "header.h"
#include <ctime>

Tree::Tree() {
  srand(time(nullptr));
  totalBranches = 3 + rand() % 3;
  for (int i = 0; i < totalBranches; i++) {
    cout << "Big Branch #" << i + 1 << ": ";
    BigBranches.emplace_back();
  }
}

int Tree::getNeighbours(const string& name) {
  int n;
  for (auto &i: BigBranches) {
    n = i.neighbours(name);
    if (n != -1) return n;
  }
  return n;
}
