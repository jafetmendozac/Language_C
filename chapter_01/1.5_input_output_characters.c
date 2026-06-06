#include <stdio.h>

/* 1.5.1 Copy files */

int main() {
  int c;

  c=getchar();

  while(c!= EOF){ //EOF =-1
    putchar(c);
    c=getchar();
  }

}

