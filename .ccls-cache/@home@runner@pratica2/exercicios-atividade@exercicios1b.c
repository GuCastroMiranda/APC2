#include <stdio.h>
int main(){
  int i = 5;
  int *p;
  p = &i;

  printf("&p : %p\n", &p);
  printf("p  (&i - endereço de i): %p\n", p);
  printf("*p ( i -   valor de i): %d\n", *p);

   // usando scanf para alterar valor de *p
  printf("Selecione um valor para *p: ");
  scanf("%d", &i);
  printf("*p ( i - valor de i): %d\n", *p);
  printf("i ( i - valor de i): %d\n", i);

  return 0;
}