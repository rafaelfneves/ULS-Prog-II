/*               *** 14 ***
Leia uma matriz 40 X 50, de caracteres não ordenados.
Pesquisar e imprimir o maior caracter e sua posição */
#include <stdio.h>
#define linha 4
#define coluna 5
void pegaMatriz();

int matriz[linha][coluna], maior, maiorposi, maiorposj;

int main(){
	pegaMatriz();
	
	return 0;
}

void pegaMatriz(){
	int i, j;
	printf ("Insira os valores da matriz:\n");
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){
			printf ("Valor (%d, %d) - ", i+1, j+1);
			scanf ("%d", &matriz[i][j]);
			if (i == 0 && j ==0){
				maior = matriz[i][j];
				maiorposi = i;
				maiorposj = j;
			}
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
				maiorposi = i;
				maiorposj = j;
			}
		}
	}
	printf ("\nMaior: %d\nSua posiçao (%d, %d)", maior, maiorposi, maiorposj);
}
