#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Alocar 1000 bytes de mem�ria livre:
	char *c;
	c = malloc(1000);
	
	//Alocar espa�o para 50 inteiros:
	int *p;
	p = malloc(50*sizeof(int));	
	
	return 0;
}

//jeito certo de se alocar memoria para vetores
int func(){
	int n;
	int *notas;
	scanf("%d",&n);
	notas = malloc(n*sizeof(int));
	return 0;
}

//Verificar se tem mem�ria ou n�o
int verifica(){
	int n, *p;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	p = malloc(n*sizeof(int));
	if(p==NULL){
		printf("Erro: memoria insuficiente!\n");
		exit(1); //aborta o programa
	}
	
	free(p);
	//aloca��o com calloc
	p = calloc(n,sizeof(int));
	if(p == NULL){
		printf("Erro: Mem�ria Insuficiente!\n");
		exit(1);
	}
	free(p);
	
	return 0;
}
