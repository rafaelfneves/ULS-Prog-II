/*                           *** 05 ***
Carregar o resultado dos jogos da loteria esportiva em um vetor RESUL [13],
que estará preenchido com os valores 1 (coluna 1), 2 (coluna 2) e 0 (coluna do meio).
O seu programa deverá totalizar os pontos de cada apostador.
Para isto, leia o número do cartão (flag: 0) e um vetor APOSTA [13].
Ao final, exiba o no do cartão, o total de pontos e, para o caso de 13 acertos,
exibir mensagem. */ 
#include <stdio.h>
#define tam 4
int main(){
	int resul[tam], aposta[tam], i, numaposta = 1, acertos = 0, erros = 0;
	char cont;
	//resultado
	for (i = 0; i < tam; i++){
		if (i == 0) printf ("INSIRA OS VALORES DO RESULTADO:\n");
		do{
			printf ("Insira o valor do jogo %d: ", i+1);
			scanf ("%d", &resul[i]);
			if (resul[i] < 0 || resul[i] > 2) printf ("ENTRADA INVALIDA\n");
		} while (resul[i] < 0 || resul[i] > 2);
	}
	//apostas
	do{
		for (i = 0; i < tam; i++){
			if (i == 0) printf ("\nINSIRA OS VALORES DA APOSTA %d\n", numaposta);
			do{
				printf ("Insira o valor do jogo %d:", i+1);
				scanf ("%d", &aposta[i]);
				if (aposta[i] < 0 || aposta[i] > 2) printf ("ENTRADA INVALIDA\n");
			} while (aposta[i] < 0 || aposta[i] > 2);
		}
		//comparando a aposta
		for (i = 0; i < tam; i++){
			if (aposta[i] == resul[i]) acertos++;
			else erros++;
		}
		//resultado da aposta
		if (acertos == tam){
			printf ("BOA ACERTOU TODOS!\n");
		}
		else{
			printf ("ACERTOS: %d\nERROS: %d\n", acertos, erros);
		}
		//continuar?
		printf ("\nDeseja inserir outra aposta (s / n)? ");
		fflush(stdin);
		scanf ("%c", &cont);
		fflush(stdin);
		if (cont == 's'){
			acertos = 0;
			erros = 0;
			numaposta++;
			system("cls");
		}
		else if (cont == 'n') printf ("OBRIGADO POR TER JOGADO CONOSCO");
	} while (cont == 's');
	
	
	return 0;
}
