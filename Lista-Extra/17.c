/*                *** 18 ***
Carregar uma matriz A 90 X 90 de inteiros.
Gerar uma matriz B, onde cada elemento corresponderá a subtração
entre o elemento de A e o valor do elemento da diagonal principal
que está na referida linha. */
#include <stdio.h>
#define tam 3
int main(){
	int i, j, matA[tam][tam], matB[tam][tam];
	
	printf("Insira os valores na matriz A:\n");
	for (i = 0; i < tam; i++){
		for (j = 0; j < tam; j++){
			printf ("A (%d, %d) - ", i+1, j+1);
			scanf ("%d", &matA[i][j]);
		}
	}
	//imprimindo A
	printf ("MATRIZ A:\n");
	for (i = 0; i < tam; i++){
		printf ("|");
		for (j = 0; j < tam; j++){
			printf ("\t%d", matA[i][j]);
		}
		printf ("\t|\n");
	}
	//definindo B
	printf ("Matriz B:\n");
	for (i = 0; i < tam; i++){
		printf ("|");
		for (j = 0; j < tam; j++){
			matB[i][j] = matA[i][j] - matA[i][i];
			printf ("\t%d", matB[i][j]);
		}
		printf ("\t|\n");
	}
	
	return 0;
}
