/* Uma matriz 20 x 20 representa o estoque de matéria-prima no pátio de uma indústria.
Cada elemento representa o código do produto e a quantidade disponível no estoque.
Calcule e imprima quantas toneladas de cada produto existe no pátio.
Exemplo: 2813 - 281 toneladas de Chumbo
CÓDIGOS: 1 – COBRE 2 – CARVÃO 3 – CHUMBO 4 – FERRO 5 – ALUMÍNIO 6 – NÍQUEL */
#include <stdio.h>
#include <math.h>
#define tam 10
void insereValores();
void printCodigos();
void printQuantidade();
void printFinal();

int matriz[tam][tam], materiais[6] = {0,0,0,0,0,0}, codigo[tam][tam], quantidade[tam][tam];
char lista[6][10] = {"Cobre", "Carvao", "Chumbo", "Ferro", "Alumin", "Niquel"};

int main(){
	insereValores();
	printCodigos();
	printQuantidade();
	printFinal();
	
	return 0;
}

void insereValores(){
	int i, j;
	srand(time(NULL)); //seta random 0
	printf("MATRIZ PRINCIPAL:\n");
	for (i = 0; i < tam; i++){
		printf ("|");
		for (j = 0; j < tam; j++){
			do{
				matriz[i][j] = 1000 + (rand() % 4000);	//gera numero na casa dos milhares no random
			} while(matriz[i][j] % 10 == 0 || matriz[i][j] % 10 == 7 || matriz[i][j] % 10 == 8 || matriz[i][j] % 10 == 9); //forca a serem entre 1 e 6
			codigo[i][j] = (matriz[i][j] % 10)-1; //pega o codigo da celula
			quantidade[i][j] = matriz[i][j] / 10; //pega a quantidade da celula
			materiais[codigo[i][j]] = materiais[codigo[i][j]] + quantidade[i][j]; //soma as quantidades
			printf ("\t%d", matriz[i][j]); //imprime o valor original da matriz
		}
		printf ("\t|\n");
	}
}

//printando codigos
void printCodigos(){
	int i, j;
	printf("\nCODIGOS ACHADOS:\n");
	for (i = 0; i < tam; i++){
		printf ("|");
		for (j = 0; j < tam; j++){
			printf ("\t%d", codigo[i][j]);
		}
		printf ("\t|\n");
	}
}

//printa quantidades
void printQuantidade(){
	int i, j;
	printf ("\nQUANTIDADE POR CELULA\n");
	for (i = 0; i < tam; i++){
		printf("|");
		for (j = 0; j < tam; j++){
			printf ("\t%d", quantidade[i][j]);
		}
		printf ("\t|\n");
	}
}

//printa lista de quantidade final
void printFinal(){
	int i;
	for (i = 0; i < 6; i++){
		if(i == 0) printf ("\nMaterial\tQuantidade\n");
		printf ("%s\t\t%d\n", lista[i], materiais[i]);
	}
}
