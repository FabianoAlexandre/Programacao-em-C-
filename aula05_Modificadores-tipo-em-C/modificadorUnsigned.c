#include <stdio.h>
#include <limits.h>

int main(void){

  unsigned char maxUnsignedChar = UCHAR_MAX;
  unsigned char minUnsignedChar = (maxUnsignedChar+1); //CHAR_MIN;
 


  printf("\n\tO tamanho de c (char): %zu bytes / %zu bits\n", sizeof minUnsignedChar, sizeof maxUnsignedChar * 8);
 
  printf("\n\tValor minimo de char (unsigned) sem sinal: %d\n", minUnsignedChar);
  printf("\n\tValor maximo de char (unsigned) sem sinal: %d\n", maxUnsignedChar);
  printf("---------------------------------------------------------------------\n");
    
  unsigned short maxUnsignedShort = USHRT_MAX;
  unsigned short minUnsignedShort = maxUnsignedShort + 1;
 
  printf("\n\tO tamanho de s (short): %zu bytes / %zu bits\n", sizeof minUnsignedShort, sizeof maxUnsignedShort * 8);
  
  printf("\n\tValor minimo de short (unsigned) sem sinal: %d\n", minUnsignedShort);
  printf("\n\tValor maximo de short (unsigned) sem sinal: %d\n", maxUnsignedShort);
  printf("---------------------------------------------------------------------\n");
 
  unsigned int maxUnsignedInt = UINT_MAX;
  unsigned int minUnsignedInt = maxUnsignedInt + 1;

  printf("\n\tO tamanho de Int (Int): %zu bytes / %zu bits\n", sizeof minUnsignedInt, sizeof maxUnsignedInt * 8);
  
  printf("\n\tValor minimo de Int (unsigned) sem sinal: %i\n", minUnsignedInt);
  printf("\n\tValor maximo de Int (unsigned) sem sinal: %i\n", maxUnsignedInt);
 
  unsigned long maxUnsignedLong = ULONG_MAX;
  unsigned long minUnsignedLong = maxUnsignedLong + 1;

  printf("\n\tO tamanho de Long (Long): %zu bytes / %zu bits\n", sizeof minUnsignedLong, sizeof maxUnsignedLong * 8);
  
  printf("\n\tValor minimo de Long (unsigned) sem sinal: %li\n", minUnsignedLong);
  printf("\n\tValor maximo de Long (unsigned) sem sinal: %li\n", maxUnsignedLong);
 
  return 0;

}
