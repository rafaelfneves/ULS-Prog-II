/* Faça um programa em C, que leia um TABULEIRO DE XADREZ (TAB – 8X8),
calcule e exiba quantas peças de cada tipo existem no tabuleiro em um determinado momento do jogo.
Considere a a seguinte convenção: 1 – PEÃO 2 - TORRE 3 – REI 4 – BISPO 5 – RAINHA 6 - CAVALO 7 - VAGO */
#include <stdio.h>
#include <math.h>
int i, j, tabuleiro[8][8], pecas[8];
//prototipos
void procura(int tabuleiro);

int main(){
	srand(time(NULL));
	for(i = 0; i < 8; i++){
		if (i == 0){
			for (i = 0; i < 8; i++){
				for (j = 0; j < 8; j++){
					do{
						tabuleiro[i][j] = rand() % 10 - 2;
						tabuleiro[i][j] = abs(tabuleiro[i][j]);
					} while (tabuleiro[i][j] == 0);
				}	
			}
		}
		for (j = 0; j < 8; j++){
		}
	}
	
	//imprimindo tabuleiro
	for (i = 0; i < 8; i++){
		printf ("|");
		for (j = 0; j < 8; j++){
			printf ("\t%d", tabuleiro[i][j]);
		}
		printf ("\t|\n\n");
	}
	
	//checando pecas
	for (i = 0; i < 8; i++){
		for (j =0; j < 8; j++){
			procura(tabuleiro[i][j]);
		}
	}
	
	//quantas pecas achadas
	for (i = 0; i < 8; i++){
		printf ("%d pecas\n", pecas[i]);
	}
	return 0;
}

void procura(int tabuleiro){
	switch (tabuleiro){
	case 1:
		pecas[1]++;
		break;
	case 2:
		pecas[2]++;
		break;
	case 3:
		pecas[3]++;
		break;
	case 4:
		pecas[4]++;
		break;
	case 5:
		pecas[5]++;
		break;
	case 6:
		pecas[6]++;
		break;
	case 7:
		pecas[7]++;
		break;
	}
}
