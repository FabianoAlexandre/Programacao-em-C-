#include <stdio.h> //Biblioteca para chamada e execução do printf
#include <limits.h> //Valores maximos e minimos utilizados em uma varialvel do tipo interio com sinal 

int main(void){
 
  char char_Max = CHAR_MAX; 
  char char_Min = CHAR_MIN;
  
  printf("\nO tamanho de um (char) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof char_Max, sizeof char_Max * 8);
  
  printf("Valor maximo de char: %d\n", char_Max);
  printf("Valor minimo de char: %d\n", char_Min);
 
  short short_Max = SHRT_MAX; 
  short short_Min = SHRT_MIN;
  
  printf("\nO tamanho de um (short) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof short_Max, sizeof short_Max * 8);
  
  printf("Valor maximo de short: %d\n", short_Max);
  printf("Valor minimo de short: %d\n", short_Min);
 
  int int_Max = INT_MAX;//variaveis com sinal(signed)
  int int_Min = INT_MIN;

  printf("\nO tamanho de um (int) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof int_Max, sizeof int_Max * 8);
  
  printf("Valor maximo de i: %d\n", int_Max);
  printf("Valor minimo de i: %d\n", int_Min);
 
   float float_Max = LONG_MAX;//variaveis com sinal(signed)
   float float_Min = LONG_MIN;

  printf("\nO tamanho de um (float) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof float_Max, sizeof float_Max * 8);
  
  printf("Valor maximo de float: %f\n", float_Max);
  printf("Valor minimo de float: %f\n", float_Min);
 
  long long_Max = LONG_MAX;//variaveis com sinal(signed)
  long long_Min = LONG_MIN;

  printf("\nO tamanho de um (Long) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof long_Max, sizeof long_Max * 8);
  
  printf("Valor maximo de long: %ld\n", long_Max);
  printf("Valor minimo de Long: %ld\n", long_Min);
 
  long long longlong_Max = LONG_MAX;//variaveis com sinal(signed)
  long long longlong_Min = LONG_MIN;

  printf("\nO tamanho de um (LongLong) em Bytes: %zu bytes / em bits: %zu bits\n", sizeof longlong_Max, sizeof longlong_Max * 8);
  
  printf("Valor maximo de long: %lld\n", longlong_Max);
  printf("Valor minimo de Long: %lld\n", longlong_Min);
  printf("\n");
 
  return 0;
} 
