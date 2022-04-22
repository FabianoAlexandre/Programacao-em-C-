#include<stdio.h>

void main(){
  int idade = 18;
  char temCNH = 'n';

  printf("Pode dirigir ?\n");
  if(idade >= 18 && temCNH == 's'){
    printf("Sim, vc pode dirigir\n");
  }
  else{
    printf("Não, vc não pode dirigir\n");
  }
}

