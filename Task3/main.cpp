#include "header.h"

int main() {
  Director D;
  D.show();
  while (!D.busy()) {
    D.getTask();
    D.delegate();
    D.show();
  }
  return 0;
}