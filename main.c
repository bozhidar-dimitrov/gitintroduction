#include <stdio.h>

int main(void) {
  printf("Hello, World!\n");
  #if defined __linux__
  printf("We are under linux");
  #elif defined _WIN32
  printf("We are under windows");
  #endif

  printf("Ending the program");
  return 0;
}
