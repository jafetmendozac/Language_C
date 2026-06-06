#include <stdio.h>

int main() {
  int c = getchar()!=EOF; // EOF(using Ctrl+D on Mac/Linux or Ctrl+Z on Windows)
//input "Hola" = 1 , input Ctrl+D = 0
  printf("%d",c);
}