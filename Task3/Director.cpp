#include "header.h"

Director::Director() {
  currentTask = Task();
  int n;
  cout << "How many managers in the company: ";
  cin >> n;
  for (int j = 0; j < n; j++) management.emplace_back(Manager(j + 1));
}

void Director::setTask() {
  cout << "Enter company strategy: ";
  currentTask.putType();
}

void Director::delegate() {
  for (auto &i: management) {
    i.setTask(this->currentTask.getType());
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
    for (auto &j: i.getTeam()) cout << j.getTask().getType() << " ";
    cout << endl;
  }
}