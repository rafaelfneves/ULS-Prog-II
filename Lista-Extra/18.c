/*
Carregar uma matriz MAT 30 X 30, inteiros,
gerar um vetor LIN, cujos elementos serão a soma dos elementos de cada linha da matriz
e um vetor COL, cujos elementos serão a soma dos elementos de cada coluna da matriz. */
#include <stdio.h>
#define linha 3
#define coluna 3
int main(){
	int i, j, mat[linha][coluna], lin[linha], col[coluna];
	for (i = 0; i < linha; i++){
		lin[i] = 0;
		col[i] = 0;
	}
	//gerando matriz	
	for (i = 0; i < linha; i++){
		if (i == 0) printf ("Insira os valores da matriz A:\n");
		for (j = 0; j < coluna; j++){
			printf ("A (%d, %d): ", i+1,j+1);
			scanf ("%d", &mat[i][j]);
			lin[i] = lin[i] + mat[i][j];
			col[j] = col[j] + mat[i][j];
		}
	}
	//imprimindo
	for (i = 0; i < linha; i++){
		if (i == 0) printf ("A soma das linhas:\n");
		printf ("Linha %d: %d\n", i+1, lin[i]);
	}
	for (i = 0; i < coluna; i++){
		if (i == 0) printf ("\nA soma das colunas:\n");
		printf ("Coluna %d: %d\n", i+1, col[i]);
	}
	return 0;
}
