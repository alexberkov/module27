#include "header.h"

Manager::Manager(int i) {
  int n;
  number = i;
  cout << "How many workers in team #" << number << ": ";
  cin >> n;
  for (int j = 0; j < n; j++) team.emplace_back(Worker());
}

int Manager::freeEmployees() {
  int co = 0;
  for (auto &i: team) if (i.getTask().getType() == NA) co++;
  return co;
}

void Manager::delegate() {
  srand(currentTask.getType() + number);
  int tasks = 0;
  if (!team.empty() && this->freeEmployees() != 0) tasks = 1 + (rand() % this->freeEmployees());
  for (auto &i: team) {
    if (i.getTask().getType() == NA && tasks != 0) {
      i.setTask(rand() % 3);
      tasks--;
    }
  }
}

vector<Worker> Manager::getTeam() {
  return team;
}