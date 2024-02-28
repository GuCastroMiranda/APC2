#include <stdio.h>
int main (){

int numero;
int *p;
p = &numero;

//Alterando o valor da variavel

*p = 5;
printf("numero: %d\n", numero);
printf("");
  return 0;
}