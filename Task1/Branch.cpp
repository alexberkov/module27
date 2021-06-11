#include "header.h"
#include <ctime>

Branch::Branch() {
  srand(time(nullptr));
  cout << "Enter elf name: ";
  cin >> elf;
  if (elf != "None") empty = false;
}

bool Branch::status() const {
  return empty;
}

BigBranch::BigBranch() {
  branches = 2 + rand() % 2;
  for (int  i = 0; i < branches; i++) {
    cout << "Middle Branch #" << i + 1 << ": ";
    middleBranches.emplace_back();
  }
}

Branch * Branch::find(const string& name) {
  if (elf == name) return this;
  else return nullptr;
}

int BigBranch::tenants() {
  int co = 0;
  if (!empty) co++;
  for (auto &i: middleBranches) if (!i.status()) co++;
  return co;
}

int BigBranch::neighbours(const string& name) {
  for (auto & j : middleBranches) {
    if (j.find(name) != nullptr || this->find(name) != nullptr) return this->tenants() - 1;
  }
  return -1;
}