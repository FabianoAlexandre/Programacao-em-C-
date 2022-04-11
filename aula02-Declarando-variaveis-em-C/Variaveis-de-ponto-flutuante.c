#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
 
  float f = 3e2;//C aceita expressões matematicas como 3e2 = 300
  double d = 1;  
  long double ld = 1;

  printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
 
  printf("O tamanho de d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);
  
  printf("O tamanho de ld (long double): %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);

  printf("Valor de f: %.2f\n", f);//%.2f indica a quantidade de casas decimais, (2), após a virgula.

  return 0;
}
