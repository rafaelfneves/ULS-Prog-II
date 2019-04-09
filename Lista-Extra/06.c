/*                  *** 6 ***
Escreva um programa que leia uma string - 80 caracteres - 
e imprima o total de pares de consoantes dobradas (rr e ss). */
#include <stdio.h>
#include <string.h>
char frase[80];
int i, tam, dobrada = 0;
void pegaFrase();
void imprimeFunc();
int main(){
	
	pegaFrase();
	imprimeFunc();
	
	return 0;
}

void pegaFrase(){
	printf ("Insira a frase a ser analisada: ");
	gets(frase);
	tam = strlen(frase);
}

void imprimeFunc(){
	int i;
	for (i = 0; i < tam; i++){
		if ((frase[i] == 'r' && frase[i+1] == 'r') || (frase[i] == 's' && frase[i+1] == 's')){
			dobrada++;	
		}
	}
	printf ("Na frase: \"%s\" foram encontradas %d consoantes dobradas", frase, dobrada);
}
