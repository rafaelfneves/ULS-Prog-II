#include <stdlib.h>
#include <stdio.h>
int fatorial(int iNumA);

int main()
{ 
  int iNumA = 0, ret = 0;
 
  printf("Digite o valor do numero A: ");
  scanf("%d", &iNumA);

  ret= fatorial(iNumA);

  printf("%d", ret);
  return 0;
}
int fatorial(int iNumA)
{
int fat, n, i;
 for(fat=1;iNumA>1;iNumA--)
 {
   fat=fat*iNumA;
 }
   return fat;
}



