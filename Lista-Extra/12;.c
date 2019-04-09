/*             *** 12 ***
Escreva um programa que recebe um texto e imprime o mesmo texto, duplicando
cada uma das letras deste texto.
Exemplo:  texto recebido: INSTITUTO DE INFORMATICA
texto devolvido: IINNSSTTIITTUUTTOO  DDEE  IINNFFOORRMMAATTIICCAA; */
#include <stdio.h>
#include <string.h>
void pegaFrase();
void duplica();

char frase[80];
int tam;

int main(){
	pegaFrase();
	duplica();
	return 0;
}

void pegaFrase(){
	printf ("Insira a frase: ");
	gets (frase);
	tam = strlen(frase);
}

void duplica(){
	int i;
	for (i = 0; i < tam; i++){
		printf ("%c%c", frase[i], frase[i]);
	}
}
