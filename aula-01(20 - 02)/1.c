#include <stdio.h>

int main(void) {

  //Var
  float nota[15], soma=0,media=0;
  int i,acima=0;
  
  //Inicio
  for(i=0;i<15;i++)
  {

    printf("Digite a nota do aluno %i: \n",i);
    scanf("%f", &nota[i]);

    soma = nota[i] + soma;
  }
  //Meio
  
  media = soma/i+1;
  printf("A media eh de %.2f",media);
  
  //Fim
  for(i=0;i<5;i++)
  {
  	if(nota[i] > media)
  	{
  		acima ++;	
	}
  }
  
  printf("\n%i alunos ficaram acima da media.",acima);
  
  return 0;
}

