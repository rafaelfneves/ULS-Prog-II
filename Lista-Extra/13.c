/*                 *** 13 *** 
Faça um programa para ler cada elemento de uma matriz 140 X 40 de inteiros,
calcular e imprimir a soma dos elementos */
#include <stdio.h>
#define linha 3
#define coluna 5
int matriz[linha][coluna], soma = 0;
void pegaMatriz();

int main(){
	pegaMatriz();
	
	return 0;
}

void pegaMatriz(){
	int i, j;
	printf ("Insira os valores da matriz:\n");
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){
			printf ("Linha %d, coluna %d: ", i+1, j+1);
			scanf ("%d", &matriz[i][j]);
			soma = soma + matriz[i][j];
		}
	}
	printf ("A soma dos valores da matriz: %d", soma);
}
