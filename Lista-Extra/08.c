/* 08 - Carregar uma frase de até 1000 caracteres e trocar todas as possíveis ocorrências
da letra n antes das letras p ou b pela letra m. */
#include <stdio.h>
#include <string.h>
#define tam 30
void analisaFrase();
void pegaFrase();
char frase[tam];
int tamanho;
int main(){
	pegaFrase();
	analisaFrase();
	printf("O correto e: %s", frase);
	getch();
	return 0;
}

void pegaFrase(){
	printf ("Insira a frase a ser analiasada: ");
	gets(frase);
	tamanho = strlen(frase);
}
void analisaFrase(){
	int i;
	for (i = 0; i < tamanho; i++){
		if (frase[i] == 'p' || frase[i] == 'b'){
			if (frase[i-1] == 'n') frase[i-1] = 'm';
		}
	}
}

