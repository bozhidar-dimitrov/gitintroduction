#include <stdio.h>

int main(void) {
  printf("Hello, World!\n");
  #if defined _WIN32
  printf("We are under windows");
  #endif
  return 0;
}
