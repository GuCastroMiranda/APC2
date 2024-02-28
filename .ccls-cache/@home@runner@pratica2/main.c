#include <stdio.h>
int main(){
  int i = 5;
  int *p;
  p = &i;

  printf("&p : %p", &p);
  printf("p  (&i - endereço de i): %p\n", p);
  printf("*p ( i -   valor de i) %d\n", *p);

  return 0;
}