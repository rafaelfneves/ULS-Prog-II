#include <stdlib.h>
#include <stdio.h>
int somaNumeros(int iNumA, int iNumB);

int main()
{  
   int iNumA = 0, iNumB = 0, ret = 0;
   
   printf("Digite o valor do numero A: ");
   scanf("%d", &iNumA);
   printf("\nDigite o valor do numero B: ");
   scanf("%d", &iNumB);
   ret= somaNumeros(iNumA, iNumB);

   printf("%d", ret);
   return 0;
}
int somaNumeros(int iNumA, int iNumB)
{
 int soma;
 int i=iNumA+1;
   while(i<iNumB)
   {
     soma=soma+i;
     i++;
   }
  
   return soma; 
}


