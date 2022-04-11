#include <stdio.h>
#include <limits.h>

int main(void){

  signed char maxSc = CHAR_MAX;
  signed char minSc = CHAR_MIN;
  unsigned char maxUc = UCHAR_MAX;
  unsigned char minUc = SCHAR_MIN;


  printf("\n\tO tamanho de c (char): %zu bytes / %zu bits\n", sizeof maxSc, sizeof maxUc * 8);
 
  printf("\n\tValor maximo de char (signed) com sinal: %d", maxSc);
  printf("\n\tValor minimo de char (signed) com sinal: %d\n", minSc);
  
  printf("\n\tValor maximo de char (unsigned) sem sinal: %d\n", minUc);
  printf("\n\tValor minimo de char (unsigned) sem sinal: %d\n", maxUc);
 
  short ss = SHRT_MAX;
  unsigned short us = USHRT_MAX;
 
 
  printf("\n\tO tamanho de s (short): %zu bytes / %zu bits\n", sizeof ss, sizeof us * 8);
  printf("\n\tvalor do short (unsigned) sem sinal: %u", ss);
  printf("\n\tvalor do short (unsigned) sem sinal: %u\n", us);

  int si = INT_MAX;
  unsigned int ui = UINT_MAX;

  printf("\n\tO tamanho de i (int): %zu bytes / %zu bits\n", sizeof si, sizeof ui * 8);
  printf("\n\tvalor do inteiro (unsigned) sem sinal: %u", si);
  printf("\n\tvalor do inteiro (unsigned) sem sinal: %u\n", ui);


  return 0;

}
