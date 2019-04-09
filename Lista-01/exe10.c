#include<stdio.h>
#include<stdlib.h>
//use a funcao anterior para ordenar o vetor

int main()
{

/*crie uma funcao que troque o menor elemento de um vetor com uma posicao que e passada por parametro*/

  int i=0, vet[5];
  for(i=1;i<=5;i++)
  {
  printf("Entre com o %d numero do vetor: ", i);
  scanf("%d", &vet[i]);
   }

//mostrar o vetor modificado
for(i=5; i >=1 ; i--){
     printf("%d\n", vet[i]);
   }
 printf("Vetor ordenando!\n");
return 0;
}



