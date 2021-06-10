#include "header.h"

Director::Director() {
  currentTask = Task();
  int n;
  cout << "How many managers in the company: ";
  cin >> n;
  for (int j = 0; j < n; j++) management.emplace_back(Manager(j + 1));
}

void Director::getTask() {
  cout << "Enter company strategy: ";
  cin >> currentTask.type;
}

void Director::delegate() {
  for (auto &i: management) {
    i.currentTask = this->currentTask;
    i.delegate();
  }
}

bool Director::busy() {
  for (auto &i: management) {
    if (i.freeEmployees() != 0) return false;
  }
  return true;
}

void Director::show() {
  for (auto &i: management) {
    for (auto &j: i.team) cout << j.currentTask.type << " ";
    cout << endl;
  }
}