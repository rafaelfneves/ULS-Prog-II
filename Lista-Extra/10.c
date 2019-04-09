/*         ***  10 ***
Escreva um programa que recebe uma palavra de até 50
caracteres e exibe quantas letras diferentes ela contém. */
void setandoAlfabeto();
void analisaPalavra();
void pegaPalavra();

#include <stdio.h>
#include <string.h>
char alfabeto[26], palavra[50];
int dif[26], tam;

int main(){
	setandoAlfabeto();
	pegaPalavra();
	analisaPalavra();
	
	return 0;
}

void setandoAlfabeto(){
	int i;
	char letra = 97;
	for (i = 0; i < 26; i++){
		dif[i] = 0;
		alfabeto[i] = letra;
		letra++;
	}
}

void pegaPalavra(){
	printf ("Insira a palavra a ser analisada: ");
	gets (palavra);
	tam = strlen(palavra);
}

void analisaPalavra(){
	int i, j, cont;
	for (i = 0; i < tam; i++){
		for (j = 0; j < 26; j++){
			if (palavra[i] == alfabeto[j]){
			dif[j]++;
			}
		}
	}
	for (i = 0; i < 26; i++){
		if (dif[i] != 0) cont++;
	}
	printf ("\nA palavra \"%s\" tem %d letras diferentes", palavra, cont);
}
