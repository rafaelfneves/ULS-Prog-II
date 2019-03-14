#include <stdio.h>

int main(){
	
	int  i,j,nl,nc;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&nl);
	
	printf("Digite o numero de colunas: ");
	scanf("%d",&nc);
		
	printf("\n");
	for(i=0;i<nl;i++){
		for(j=0;j<nc;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;	
}





