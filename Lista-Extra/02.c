/*                         *** 02 *** 
Carregue um vetor de números reais com 80 posições e desenvolva um 
programa para encontrar o maior e o menor valor. Após isto, o programa 
deverá trocar o maior valor com o da primeira posição e o menor valor 
com o da última posição.*/ 

#include <stdio.h>
#define tam 80
int main(){
	int i, vet[tam], maior, maiorpos, menor, menorpos, aux;
	srand(time(NULL));
	//setando valores no vetor
	for (i = 0; i < tam; i++){
		vet[i] = rand() % 100;
		if (i == 0){
			printf ("VETOR = [%d, ", vet[i]);
			maior = vet[i];
			maiorpos = i;
			menor = vet[i];
			menorpos = i;
		}
		else{
			if (i == tam - 1) printf ("%d]\n", vet[i]);
			else printf ("%d, ", vet[i]);
		}
		if (vet[i] > maior){
			maior = vet[i];
			maiorpos = i;
		}
		if (vet[i] < menor){
			menor = vet[i];
			menorpos = i;
		}
	}
	//trocando posicoes [0] - maior
	aux = vet[0];
	vet[0] = maior;
	vet[maiorpos] = aux;
	//trocando posicoes [tam-1] - menor
	aux = vet[tam-1];
	vet[tam-1] = menor;
	vet[menorpos] = aux;
	
	//imprime vetor trocado
	for (i = 0; i < tam; i++){
		if (i == 0) printf ("VETOR = [%d, ", vet[i]);
		else{
			if (i == tam - 1) printf ("%d]", vet[i]);
			else printf ("%d, ", vet[i]);
		}
	}
	getch();
	return 0;
}
