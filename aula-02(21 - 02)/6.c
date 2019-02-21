#include <stdio.h>

int main()
{
	int jogo[3][3],cont=2;
	int i,j;
	
	printf("|====================JOGO DA VELHA====================|\n");
	
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{	
			cont = cont - 1;
			
			printf("Vez do jogador %d",cont);
			printf("Digite 1 ou -1 [%d][%d]: ",i,j);
			scanf("%d", &jogo[i][j]);
			
			cont= cont + 1;
			printf("\n");	
		}
	}	
	for(i=0;i<3;i++)
	{
	printf("|\t");
		for(j=0;j<3;j++)
		{
		printf("%d\t",jogo[i][j]);
		}		
		printf("|\n");
	}
	
	if(i + j = 3)
	{
		
	}	
	
	return 0;
}
