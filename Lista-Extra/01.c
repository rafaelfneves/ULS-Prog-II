/* 01 - Carregue um vetor de inteiros com 100 posições e
desenvolva um programa para:
a) Exibir o maior elemento e sua posição;
b) Imprimir a soma dos elementos que estão nos índices pares;
c) Exiba a soma dos elementos impares. 
*/
#include <stdio.h>
#define tam 100
int main(){
	int i, vet[tam], maior, maiorpos, somapar = 0, somaimpar = 0;
	//setando valores randomicos
	for (i = 0; i < tam; i++){
		vet[i] = rand() % 100;
		if (i == 0){
			maior = vet[i];
			maiorpos = i;	
		}
		if (vet[i] > maior){
			maior = vet[i];
			maiorpos = i;	
		}
		if (i % 2) somapar = somapar + vet[i];
		else somaimpar = somaimpar + vet[i];
	}
	//imprimindo vetor
	for (i = 0; i < tam; i++){
		if (i == 0) printf ("VETOR = [%d, ", vet[i]);
		else{
			if (i == tam - 1) printf ("%d]\n", vet[i]);
			else printf ("%d, ", vet[i]);
		}
		
	}
	//a) Exibir o maior elemento e sua posicao
	printf ("\nMaior elemento: %d\nSua posicao: %d", maior, maiorpos);
	//b) imprimir a soma dos elementos que est'ao nos indices pares
	printf ("\nA soma dos indices PARES: %d", somapar);
	//c) exiba a soma dos elementos impares
	printf ("\nA soma dos indices IMPARES: %d", somaimpar);
	
	getch();
	return 0;
}
