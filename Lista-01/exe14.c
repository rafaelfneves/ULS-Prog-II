#include <stdio.h>

int main(){
	
	int nota[14]; 
	int gab[9];
	int resp[9], acerto=0, erro=0;
	int i,j;
	
	//Gabarito
	for(i=0;i<2;i++)
	{
		printf("Digite o gabarito da questao %d [1-2-3-4]: ",i+1);
		scanf("%d", &gab[i]);
	}
	
	//Aluno
	for(i=0;i<2;i++)
	{
		//Respostas
		for(j=0;j<2;j++)
		{
			printf("Aluno %d, Digite sua resposta da %d [1-2-3-4]: ",i+1,j+1);
			scanf("%d",&resp[j]);
			
			if(resp[j] = gab[j])
			{
				nota[j]= nota[j]+1;
			} 
		}
		
		printf("Nota do Aluno %d: %d\n", i+1,nota[i]);
	}
	
	return 0;
}

