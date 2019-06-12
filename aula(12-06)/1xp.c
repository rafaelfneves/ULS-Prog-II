#include <stdio.h>
#define tam 3

void procurarID(int x);

struct venda{
	int idProduto;
	int quantidade,stock;
	float valor;
  	char nome[100];
};

struct venda pd[tam];

int main(){
	int i;
	int x;
	int total=0,opcao=0,id=0;
	
	FILE * fp = fopen("produtos.txt","r");
	if(fp == NULL){
		printf("Nao foi possivel acessar o arquivo");
		exit(1);
	}
	
	//Leitura
	printf("CODIGO | NOME | VALOR VENDA | QUANTIDADE\n");
	for(i=0;i<tam;i++){
		
		while(fscanf(fp,"%*s %d %*s %s %*s %f %*s %d",&pd[i].idProduto,pd[i].nome,&pd[i].valor,&pd[i].quantidade) != EOF){
			printf("%d %s %.2f %d\n",pd[i].idProduto,pd[i].nome,pd[i].valor,pd[i].quantidade);
		}
	}
	
	do{
		printf("\nDeseja alterar algum dado?\n");
		printf("1 - Nome\n");
		printf("2 - Valor do produto\n");
		printf("3 - Quantidade\n");
		printf("4 - Sair\n");
		scanf("%d",&opcao);
		
		if(opcao == 3){
		
		printf("\nQual o ID do dado a ser alterado? \n");
		scanf("%d",&x);
		void procurarID();
		printf("%d\n",x);
		system("pause");
		}
	}while(opcao != 4);
	
	
	
	system("pause");
	return 0;
}

void procurarID(int x){
	int i;
	
	for(i=0;i<tam;i++){
		if(pd[i].idProduto == x);
	}
}


