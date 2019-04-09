/*                             *** 20 ***
Calcular a média das 3 notas bimestrais obtidas por cada aluno e a média da turma,
Sabe-se que as notas estão registradas em cada linha da matriz.
Os 45 alunos estão codificados com valores seqüências, identificados pelo índice da
linha da matriz */
#include <stdio.h>
#define tam 45
#define ava 3
float alunos[tam][ava], media[tam], mediaturma;
void pegaNotas();
void imprimeResultados();
int main(){
	pegaNotas();
	imprimeResultados();
	return 0;
}
 
void pegaNotas(){
	int i, j;
	for (i = 0; i < tam; i++){
		printf ("NOTAS DO ALUNO %d\n", i+1);
		for (j = 0; j < ava; j++){
			do{
				printf ("Insira a nota %d: ", j+1);
				scanf ("%f", &alunos[i][j]);
				if(alunos[i][j] < 0 || alunos[i][j] > 10) printf("ENTRADA INVALIDADE, TENTE NOVAMENTE\n");
			} while (alunos[i][j] < 0 || alunos[i][j] > 10);
			media[i] = media[i] + alunos[i][j];
		}
		media[i] = media[i] / ava;
		mediaturma = mediaturma + media[i];
	}
} 

void imprimeResultados(){
	int i;
	printf ("\nRESULTADOS FINAIS\nN\tN1\tN2\tN3\tMedia\n");
	for (i = 0; i < tam; i++){
		printf ("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i+1, alunos[i][0], alunos[i][1], alunos[i][2], media[i]);
	}
	printf ("\nA media da turma foi de: %.2f", mediaturma/tam);
}
   
