#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, par=0,impar=0;
	int n, *p;
	printf("Digite quantos numeros: ");
	scanf("%d",&n);
	p = malloc(n*sizeof(int));
	
	if(p == NULL){
		printf("Erro: Memória Insuficiente");
		exit(1);
	}
	printf("\n|===================================PROGRAMA===================================|\n");
	for(i=0;i<n;i++){
		printf("Digite n[%d]: ",i);
		scanf("%d",&p[i]);
		
		if(p[i] % 2 == 0){
			par++;
		} else{
			impar++;
		}
	}
		
		printf("\nNumeros Pares: %d",par);
		printf("\nNumeros Impares: %d",impar);
	
	printf("\n|==============================================================================|\n");
	
	free(p);
	system("pause");
	return 0;
}
