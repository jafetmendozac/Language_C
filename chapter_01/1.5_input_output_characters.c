#include <stdio.h>

/* 1.5.1 Copy files */

// int main() {
//   int c;

//   c=getchar();

//   while(c!= EOF){ //EOF =-1
//     putchar(c);
//     c=getchar();  
//   }
// }


/* 1.5.2 Count Characters*/

// int main() {
//   long nc;

//   nc=0;

//   while(getchar()){
//     ++nc;
//     printf("%ld\n", nc);
//   }

//   return 0;
// }

// int main() {
//   double nc;

//   for(nc=0; getchar()!= EOF; ++nc)
//     printf("%.0f\n", nc);

//   return 0;
// }

/* Count Lines */

int main() {
  int c, nl;

  nl=0;

  while((c = getchar())!= EOF){
    if(c=='\n')
      ++nl;
    printf("%d\n", nl);
  }

  return 0;
}
//Un carácter escrito entre apóstrofos representa un valor entero igual al valor
//numérico del carácter en el conjunto de caracteres de la máquina