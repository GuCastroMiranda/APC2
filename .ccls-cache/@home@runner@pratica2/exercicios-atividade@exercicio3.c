#include <stdio.h>
int main(){
int n1 = 3, n2 = 5;

//alternando os valores com ponteiro
int *p, *n, x;
p = &n1;
n = &n2;

// é necessário usar uma variavel temporaria para armazenar um dos valores
x = *p; 
*p = *n;
*n = x;


  
printf("n1: %d, n2: %d\n", n1, n2);

  return 0;
}