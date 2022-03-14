#include <stdio.h>

int main(void){

  printf("The variables's size in C are:\n Char: byte = %lu bits = byte * 8 = 8\n Unsigned Char: %lu\n Short: %lu\n Unsigned Short: %lu\n Unsigned: %lu\n Int: %lu\n Float: %lu\n Double: %lu\n Long: %lu\n Unsigned Long: %lu\n Long Double: %lu\n", sizeof (char), sizeof (unsigned char), sizeof (short), sizeof (unsigned short), sizeof (unsigned), sizeof (int), sizeof (float), sizeof (double), sizeof (long), sizeof (unsigned long), sizeof (long double));
}           
