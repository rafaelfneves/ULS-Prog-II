/* Carregar duas matrizes A e B de tamanho 50 X 50, de números reais,
desenvolva um programa que gere uma MATRIZ C, resultante da soma das matrizes A e B. */
#include <stdio.h>
#define tam 5
void pegaMatrizAB();
void gerarC();

int matA[tam][tam], matB[tam][tam], matC[tam][tam];
int main(){
	pegaMatrizAB();
	gerarC();
	return 0;
}

void pegaMatrizAB(){
	int i, j;
	printf ("Insira os valores das matrizes:\n");
	//setando random A e B
	srand(time(NULL));
	for (i = 0; i < tam; i++){
		for (j = 0; j < tam; j++){
			matA[i][j] = rand() % 10;
			matB[i][j] = rand() % 10;
		}
	}
	printf ("VET A:\n");
	for (i = 0; i < tam; i++){
		printf ("|\t");
		for (j = 0; j < tam; j++){
			printf ("%d\t", matA[i][j]);
		}
		printf ("|\n");
	}
	printf ("VET B:\n");
	for (i = 0; i < tam; i++){
		printf ("|\t");
		for (j = 0; j < tam; j++){
			printf ("%d\t", matB[i][j]);
		}
		printf ("|\n");
	}
}

void gerarC(){
	int i, j;
	printf ("VET C:\n");
	for (i = 0; i < tam; i++){
		printf ("|\t");
		for (j = 0; j < tam; j++){
			matC[i][j] = matA[i][j] + matB[i][j];
			printf ("%d\t", matC[i][j]);
		}
		printf ("|\n");
	}
}
