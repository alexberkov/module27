#include "header.h"

void Task::setType(int t) {
  type = t;
}

void Task::putType() {
  cin >> type;
}

int Task::getType() const {
  return type;
}

Task Worker::getTask() {
  return currentTask;
}

void Worker::setTask(int t) {
  currentTask.setType(t);
}