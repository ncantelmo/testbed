#include <stdio.h>

int add(int, int);

int main() {
  printf("Hello, world!\n");

  int added = add(3, 5);
  printf("add(3,5) result: %d\n", added);

  return 0;
}

int add(int x, int y) {
  return x + y;
}

