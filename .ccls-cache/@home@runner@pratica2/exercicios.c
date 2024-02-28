#include <stdio.h>
int main(){
  int i = 5;
  int *p;
  p = &i;

  printf("&p : %p\n", &p);
  printf("p  (&i - endereço de i): %p\n", p);
  printf("*p ( i -   valor de i): %d\n", *p);

   // atribuindo diretamente novo valor em *p
  *p = 7;
  printf("*p ( i - valor de i): %d\n", *p);
  printf("i ( i - valor de i): %d\n", i);
  
  return 0;
}