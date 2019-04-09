/* Carregar uma matriz 10 X 10, de inteiros, ordenados e sem repetição,
desenvolva um programa que verifique se um determinado número dado existe
na matriz, caso não exista emitir mensagem correspondente */
#include <stdio.h>
#define linha 3
#define coluna 3
int matriz[linha][coluna], procura, encontrado = 0;
void insereMatriz();
void procuraNum();

int main(){
	insereMatriz();
	procuraNum();
	return 0;
}

void insereMatriz(){
	int i, j;
	printf("Insira os valores na matriz\n");
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){
			printf ("Insira o elemento (%d, %d)", i+1, j+1);
			scanf ("%d", &matriz[i][j]);
		}
	}
}

void procuraNum(){
	int i, j;
	printf("Insira o numero a ser procurado: ");
	scanf ("%d", &procura);
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){
			if (matriz[i][j] == procura){
				encontrado++;
				printf ("%d foi encontrado em (%d,%d)", procura, i+1, j+1);
			}
		}
	}
	if (encontrado == 0){
		printf ("O valor nao foi encontrado");
	}
}
