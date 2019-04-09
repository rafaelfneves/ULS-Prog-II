/* Carregue dois vetores A e B de números inteiros com 40 e 50 elementos
respectivamente. Desenvolva um programa para gerar um terceiro VETOR C com
os elementos diferentes existentes nos vetores A e B. */
#include <stdio.h>
#define tamA 4
#define tamB 5
#define tamC tamA + tamB
int main(){
	int i, j, vetA[tamA], vetB[tamB], vetC[tamC];
	int cont = 0, tamanhoC = 0;
	srand(time(NULL));
	//setando randomicamente A e B
	for (i = 0; i < tamB; i++){
		if (i < tamA){
			vetA[i] = rand() % 100;
			vetB[i] = rand() % 100;
		}
		else vetB[i] = rand() % 100;
	}
	//setando -1 em C
	for (i = 0; i < tamC; i++){
		vetC[i] = -1;
	}
	//imprimindo A
	for (i = 0; i < tamA; i++){
		if (i == 0) printf ("VETOR A - [%d, ", vetA[i]);
		else{
			if(i == tamA-1) printf ("%d]\n", vetA[i]);
			else printf ("%d, ", vetA[i]);
		}
	}
	//imprimindo B
	for (i = 0; i < tamB; i++){
		if (i == 0) printf ("VETOR B - [%d, ", vetB[i]);
		else{
			if(i == tamB-1) printf ("%d]\n", vetB[i]);
			else printf ("%d, ", vetB[i]);
		}
	}
	//gerando C
	for (i = 0; i < tamA; i++){
		for (j = 0; j < tamB; j++){
			if (vetA[i] != vetB[j]) cont++;
		}
		if (cont == tamB){
			vetC[tamanhoC] = vetA[i];
			cont = 0;
			tamanhoC++;
		}
		else cont = 0;
	}
	for (i = 0; i < tamB; i++){
		for (j = 0; j < tamA; j++){
			if (vetB[i] != vetA[j]) cont++;
		}
		if (cont == tamA){
			vetC[tamanhoC] = vetB[i];
			cont = 0;
			tamanhoC++;
		}
		else cont = 0;
	}
	//imprimindo C
	for (i = 0; i < tamanhoC; i++){
		if (i == 0) printf ("VETOR C - [%d,", vetC[i]);
		else{
			if (i == tamanhoC - 1) printf (" %d]\n", vetC[i]);
			else printf (" %d,", vetC[i]);
		}
	}
	getch();
	return 0;
}
