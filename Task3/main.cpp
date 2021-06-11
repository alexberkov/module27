#include "header.h"

int main() {
  Director D;
  D.show();
  while (!D.busy()) {
    D.setTask();
    D.delegate();
    D.show();
  }
  return 0;
}