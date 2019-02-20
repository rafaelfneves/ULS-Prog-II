#include <stdio.h>

int main() {

  //Var
  float temp[15],soma=0,media=0;
  int i;
  
  //Inicio
  for(i=0;i<5;i++)
  {

    printf("Digite a temperatura %i: \n",i);
    scanf("%f", &temp[i]);

    soma = temp[i] + soma;
  }
  //Meio
  
  media = soma/i+1;
  
  //FIM
  printf("A media eh de %.2f",media);
  

  
  return 0;
}

