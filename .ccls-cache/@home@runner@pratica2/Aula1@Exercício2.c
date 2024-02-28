#include <stdio.h>
int main() { 
  int rgba = 0x010203FF;
  unsigned char *c = (unsigned char *) &rgba;
// a = FF (255 em decimal)
  printf("%x = %d\n", *c, *c);
// r = 01
  c++; 
  printf("%x = %d\n", *c, *c);
// g = 02
  c++;
  printf("%x = %d\n", *c, *c);
// b = 03
  c++;
  printf("%x = %d\n", *c, *c);

  return 0;
}