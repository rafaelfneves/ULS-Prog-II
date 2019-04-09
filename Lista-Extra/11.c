/*           *** 11 ***
Faça um programa que armazene os dados de 20 funcionários de uma
empresa em 2 arranjos: um com os nomes dos funcionários e outro
com seus salários. Índices iguais nos arranjos indicam informações
relativas ao mesmo funcionário.
Depois:  
a) exibir os dados lidos (nome e salário correspondente);
b) exiba o ultimo sobrenome dos funcionários com salário inferior
à metade do maior salário pago na empresa;
c) escrever os salários de todos os funcionários cujo primeiro
nome é Maria. */
#include <stdio.h>
#include <string.h>
#define funcionarios 3

//prototipos
void pegaNome();
void funcA();
void funcB();
void funcC();

//globais
char nome[funcionarios][50];
int salarios[funcionarios], tam[funcionarios], maior;

//principal
int main(){
	pegaNome();
	funcA();
	funcB();
	funcC();
	
	return 0;
}

//funcoes
void pegaNome(){
	int i;
	for(i = 0; i < funcionarios; i++){
		printf ("Insira o nome do funcionario: ");
		gets(nome[i]);
		tam[i] = strlen(nome[i]);
		printf ("Insira seu salario: ");
		scanf ("%d", &salarios[i]);
		getchar();
		if (i == 0) maior = salarios[i];
		if (salarios[i] > maior) maior = salarios[i];
	}
}

void funcA(){
	int i;
	printf ("\na) exibir os dados lidos (nome e salário correspondente):\n");
	for (i = 0; i < funcionarios; i++)	{
		if (i == 0) printf ("\t*** TABELA DE FUNCIONARIOS ***\nNome\tSALARIO");
		printf ("\n%s\t%d reais", nome[i], salarios[i]);
	}
}

void funcB(){
	int i, j, z;
	printf ("\n\nb) exiba o ultimo sobrenome dos funcionários com salário inferior a metade do maior salario pago na empresa:\nNº\tNome\tSalario\n");
	for (i = 0; i < funcionarios; i++){
		if (salarios[i] < maior/2){
			for (j = tam[i]; j > 0; j--){
				if (nome[i][j] == ' '){
					printf ("%d)\t", i+1);
					for(z = j; z <= tam[i]; z++){
						printf ("%c", nome[i][z]);
					}
					printf("\t%d R$\n", salarios[i]);
				}
				
			}
		}
	}
}

void funcC(){
	int i, j;
	printf ("\nc) escrever os salarios de todos os funcionários cujo primeiro nome e Maria.\n");
	for (i = 0; i < funcionarios; i++){
		if ((nome[i][0] == 'm' || nome[i][0] == 'M') && nome[i][1] == 'a' && nome[i][2] == 'r' && nome[i][3] == 'i' && nome[i][4] == 'a'){
			printf ("%d\t%d R$", i, salarios[i]);
		}
	}	
}
