/*                  *** 09 ***
 Escreva um programa em C que receba um texto, na string ENT,
e devolva, em SAI, este mesmo texto tendo sido eliminado todos
os espaços brancos. Exiba o tamanho das strings ENT e SAI
(sem utilizar a função strlen). */
#include <stdio.h>
void pegaFrase();
void removeEspacos();
char ent[80], sai[80];
int tam;

int main(){
	pegaFrase();
	removeEspacos();
	printf ("%s", sai);
	return 0;
}

void pegaFrase(){
	int i;
	printf ("Insira a frase a ser analisa: ");
	gets(ent);
	for (i = 0; i < 80; i++){
		if (ent[i] == '\0'){
			tam = i;
			break;
		}
	}
}

void removeEspacos(){
	int i, j = 0;
	for (i = 0; i < tam; i++){
		if (ent[i] == ' '){
			sai[j] = ent[i+1];
			i++;
		}
		else sai[j] = ent[i];
		j++;
	}
}
