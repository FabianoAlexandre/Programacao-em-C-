#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void){
  //variables's type
  char ss[20] = "Fabiano Alexandre";
  char c = 'F';
  short s = 2;
  int i = 40;
  float f = 80.24;
  double d = 1.70;
  long double ld = 6790.99;
  long double ldd = 15989.89;
  bool b = true; //b = 1 true b = 0 false
  printf("\n\tName %s", ss);
  printf("\n\tLetter %c", c);
  printf("\n\tChildren %d", s);
  printf("\n\t Years old %i", i );
  printf("\n\t Weith %.2f", f);
  printf("\n\t Size %.2f", d);
  printf("\n\t Salary %.2Lf", ld);
  printf("\n\t Dream's Salary %.2Lf", ldd);
  printf("\n\t Single %d\n", b);




  return 0;
}
