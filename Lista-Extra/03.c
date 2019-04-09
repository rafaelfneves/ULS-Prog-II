/*             *** 03 ***
Carregue um vetor de 50 elementos inteiros e não ordenados.
Leia um determinado número e pesquise se o mesmo existe no VETOR.
Caso exista, imprimir seu valor e em que posição ele está, caso contrário,
exiba uma mensagem. */
#include <stdio.h>
#define tam 50
int main(){
	int i, num, vet[tam], achadopos = -1;
	//gerando randomicamente e imprimindo
	srand(time(NULL));
	for (i = 0; i < tam; i++){
		vet[i] = rand() % 100;
		if (i == 0) printf ("VETOR = [%d,",vet[i]);
		else{
			if (i == tam - 1) printf ("%d]", vet[i]);
			else printf (" %d,", vet[i]);
		}
	}
	//valor a ser procurado
	printf ("\nInsira o valor a ser buscado: ");
	scanf ("%d", &num);
	for (i = 0; i < tam; i++){
		if (num == vet[i]){
			achadopos = i;
		}
	}
	//se achou ou nao
	if (achadopos == -1) printf ("VALOR INEXISTENTE");
	else printf ("%d esta no vetor na posicao %d", num, achadopos);
	getch();
	return 0;
}
