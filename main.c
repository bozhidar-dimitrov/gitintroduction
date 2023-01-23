#include <stdio.h>

int main(void) {
  printf("Hello, World!\n");
  #if defined __linux__
  printf("We are under linux");
  #endif
  return 0;
}
