#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define tam 5
#define quant 10

//VETORES
typedef struct{
	int codigo;
	int quantidade;
	char nome[15];
	float preco;
}ESTOQUE;

ESTOQUE toq[tam];

//funcoes
void pedido();
void idProd();

//MAIN
int main(){
	
	//Variaveis
	int i;
	int resp=0;
	
	idProd();
	//MENU
	printf("1-Comprar produto\n");
	//printf("2-Definir estoque\n");
	//printf("3-Definir Codigo\n");
	printf("5-SAIR\n\n");
	printf("Escolha uma opcao: ");
	scanf("%d",&resp);
	
	switch(resp){
		case 1:
			pedido();
			break;
		case 5:
			printf("\n-=-=-=-=-FIM DO PROGRAMA-=-=-=-=-");
			exit(1);
		default:
		printf("Valor invalido!\n");
	}
	
	getch();
	return 0;
}

void pedido(){
	int id=0, qtd=0, invalidId=0;
	int i;
	
	printf("\nID do produto: ");
	scanf("%d",&id);
	
	for(i=0;i<tam;i++){
		//Procura ID
		if(id == toq[i].codigo){
			//Procura quantidade
			printf("Digite a quantidade: ");
			scanf("%d",&qtd);
			
			
			toq[i].quantidade = toq[i].quantidade - qtd;
			//Ve se tem no ESTOQUE
			if(toq[i].quantidade < 0){
				//ERRO1
				printf("Acabou Estoque!\n");
				toq[i].quantidade = toq[i].quantidade + qtd;
				printf("\n\tID: %d\tQuantidade: %d\n",toq[i].codigo,toq[i].quantidade);
				invalidId=0;
				break;
			}
			printf("\n\tID: %d\tQuantidade: %d\n",toq[i].codigo,toq[i].quantidade);
			invalidId=0;
			break;
		} else {
			invalidId=1;
		}
	}
	//ERRO2
	if(invalidId == 1){
		printf("ID invalido!");
	}
}

void idProd(){
	int i; 
		
	for(i=0;i<tam;i++){
		toq[i].codigo = i+1;
		toq[i].quantidade=quant;
	}
}
