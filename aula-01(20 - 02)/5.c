#include <stdio.h>

int main()
{
	char mat[3][5],gab[5];
	int i,j,ponto;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Digite a resposta da questao %d do aluno %d: ",i+1,j+1);
			scanf(" %c",&mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite o Gabarito\n");
	
	for(i=0;i<5;i++)
	{
		printf("Q%d: ",i);
		scanf(" %c", &gab[i]);
	}
	
	//Todos os alunos
	
	for(i=0;i<3;i++)
	{
		int ponto = 0;
		for(j = 0;j<5;j++)
		{
			if(mat[i][j] == gab[j]);
			ponto++;	
		}
		printf("O aluno %d teve %d pontos \n", i+1,ponto);
	}
	
	return 0;
}
