#include <stdio.h>

int main()
{
	int i,j, mat[5][5],x=0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Digite [%d] [%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");

	}
	
	system("cls");
	
	for(i=0;i<5;i++)
	{
		printf("|\t");
		for(j=0;j<5;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("|\n");
		
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(mat[i][j] == x) 
			{
				printf("\nFoi achado o numero %d em: [%d][%d]", x,i+1,j+1);	
			}
		}
	}
	
	return 0;
}
