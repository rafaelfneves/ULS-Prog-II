#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define CAPACIDADE_MAXIMA 100 // fecha bibliotecas e Inicio de Funções 

int cliente(opcao);
int produtos(opcao);
int venda(opcao);


// Final de Funções e Inicio de estruturas
typedef struct {// Aqui salvamos o cadastro do cliente e com isso suas informações pessoais, para podermos consultar oque está salvo e quanto ele deve
  char nomecliente[CAPACIDADE_MAXIMA];
  char nomerua[CAPACIDADE_MAXIMA];
  int numerocasa;
  float fiado;
  int idcliente;
}cadastros;

typedef struct{
	int idproduto;
	int quantide;
	float valor;
	char nome[CAPACIDADE_MAXIMA];
}venda;


typedef struct{
	float total;
	char cliente[CAPACIDADE_MAXIMA];
	struct VendaCarrinho carrinho[CAPACIDADE_MAXIMA]; 
}renda;


typedef struct{
	int idproduto;
	int quantidade;
	float valor;
	char nome[CAPACIDADE_MAXIMA];
}VendaCarrinho;





//Final de estruturas e incio de Programa Principal 
int main (){	
cadastros cadastrados;
venda vendidos;
	setlocale(LC_ALL,"Portuguese");
	int quantidade=0;
 	int opcao=1;
    FILE* fp;
do{
	system("cls");
    puts("Padaria da dona Joana");
        
    printf("Escolha uma opção:\n 1 - Cliente\n 2 - Produtos\n 3 - Vender\n 4 - Listar Vendas\n 5 - Fechar caixa\n 6 - Instruções\n");
    scanf("%d",&opcao);
    switch (opcao){
    	case 1: // 1- Cliente, engloba tudo que o cliente pode realizar, como criar o cadastro de fiado
			cliente(opcao);
    		system("cls");
    		break;
    	case 2: // 2 -  Alterar produto, adicionar produto, alterar preço...
    		produtos(opcao);
    		system("cls");
			break;
		case 3: // 3 - Vender produtos, seja a vista ou fiado(Nessesário ter conta antes para isso) 
			venda(opcao);
			system("cls");
			break;         
	    case 4:  // 4 - Lista de oque foi vendido, no dia atual ou no dia "x"
    		system("cls");
    		break;       
    	case 5:  // 5 - Fechar o Caixa salvar e encerrar programa
    		system("cls");
    		exit(0);
    		break;   
    	case 6:  // 6 - Lista de Instruções
    		system("cls");  
      		printf(" 1-Engloba todas as ações realizadas do cliente.\n 2-Alterar o produto selecionado podendo adicionar outros produtos a sua escolha e modificar seus preços.\n 3-Vender o produto podendo optar pelas opções de a vista ou fiado(necessário cadastro antes disto) \n 4-Lista de itens vendidos,tendo a opção de recorrer uma data escolhida. \n 5-Realizar fechamento do caixa e salvar o registro,além de encerrar o programa.\n");
     		system("pause");     		
			break;       
		default:
      		system("cls");  
  			printf("Opcao invalida, tente novamente.\n.");
        	system("pause");
        	system("cls");
	  		break;    
    	}
  	}while (opcao!=5);
  	return 0;
}//kaeritai

int cliente(opcao){
	cadastros cadastrados;
	int opc=0,n=0,id;
	char res, continuar;
	FILE* ab;
	FILE* rb;
	FILE* br;
		ab = fopen("cliente.bin", "ab");
		rb = fopen("cliente.bin", "rb");
		br = fopen("cliente.bin", "r+b");
		system("cls");
		if(ab == NULL){
			printf("Erro na abertura de arquivo! \n");
    		exit(1); // código de internacional de "deu ruim"
			}
	system("cls");
	do{
		printf("Oque você deseja?\n 1 - Cadastrar\n 2 - Ver Cadastrados\n 3 - Modificar dados de cliente\n\n 0 - Voltar\n\n Sua Opção: ");
	 	scanf("%d",&opc);
	 	if (opc==1){// Recebe as informações dos clientes
		 	do{	
				printf("Digite o nome do cliente: ");
				fflush(stdin);
				fgets(cadastrados.nomecliente,CAPACIDADE_MAXIMA,stdin);
				cadastrados.nomecliente[strlen(cadastrados.nomecliente)-1]='\0';
				printf("Digite o nome da rua:");
				fgets(cadastrados.nomerua,CAPACIDADE_MAXIMA,stdin);
				cadastrados.nomerua[strlen(cadastrados.nomerua)-1]='\0';
				printf("Digite o numero da casa ou apartamento:");
				scanf("%d",&cadastrados.numerocasa);
				cadastrados.fiado=0;	
				while(fread(&cadastrados,sizeof(cadastros),1,rb)){//define o id do cliente contando quantos clientes foram cadastrados			
					n++;
				}
				cadastrados.idcliente=n;
				system("cls");
				// confirmar dados do cliente
				printf("Confirmação de dados.\n Nome do cliente: %s \n Rua: %s \n Numero da casa/apartamento: %d \n os dados estão corretos?s/n",cadastrados.nomecliente,cadastrados.nomerua,cadastrados.numerocasa);
				scanf("%c",&continuar);
				system("cls");
				while(continuar!='s'||continuar!='n'){
					printf("Não entendi, deseja salvar o Cadastro do Cliente?s/n");
					scanf("%c",&continuar);
					system("cls");
				}
			}while(continuar=='s');
				fwrite(&cadastrados,sizeof(cadastros),1,ab);
				printf("Cliente cadastrado com sucesso.\nDeseja cadastrar outro? s/n\n");
				scanf("%c",&continuar);// Confirma se é necessário cadastrar outro sem voltar ao menu pricipal
				system("cls");
				n=0;
				while(continuar!='s'||continuar!='n'){
					printf("Não entendi, deseja cadastrar Outro Cliente?s/n");
					scanf("%c",&continuar);
					system("cls");
				}
			}while(continuar=='s');
		if(opc==2){// Mostra todos os clientes de dona joana
			printf("Id do Cliente\tNome do Cliente\tRua do cliente\tNumero da casa/predio\tFiado\n");
			while(fread(&cadastrados,sizeof(cadastros),1,rb)){
				printf("%d\t\t%s\t\t%s\t\t%d\t\t%d\n", cadastrados.idcliente, cadastrados.nomecliente, cadastrados.nomerua, cadastrados.numerocasa, cadastrados.fiado);
			}
			system("pause");
		}
		if(opc==3){//Mostra todos os clientes da dona joana para poderem ser modificados
			printf("Id do Cliente\tNome do Cliente\tRua do cliente\tNumero da casa/predio\tFiado\n");	
			while(fread(&cadastrados,sizeof(cadastros),1,rb)){
				printf("%d\t\t%s\t\t%s\t\t%d\t\t%d\n", cadastrados.idcliente, cadastrados.nomecliente, cadastrados.nomerua, cadastrados.numerocasa, cadastrados.fiado);
			}
			printf(" Digite o ID do cliente que você quer modificar.");
			scanf("%d", &id);
			fseek(rb, id *sizeof(cadastros),SEEK_SET);
			fread(&cadastrados,sizeof(cadastros),1,rb);
			printf("Confirme o nome do cliente: ");
			fflush(stdin);
			fgets(cadastrados.nomecliente,CAPACIDADE_MAXIMA,stdin);
			cadastrados.nomecliente[strlen(cadastrados.nomecliente)-1]='\0';
			printf("Confirme o nome da rua:");
			fgets(cadastrados.nomerua,CAPACIDADE_MAXIMA,stdin);
			cadastrados.nomerua[strlen(cadastrados.nomerua)-1]='\0';
			printf("Confirme o numero da casa ou apartamento:");
			scanf("%d",&cadastrados.numerocasa);

			do{
				printf("Deseja salvar? s/n");
				scanf("%c",&res);
				if(res=='s'){
					fseek(br,id*sizeof(cadastros),SEEK_SET);
					fwrite(&cadastrados,sizeof(cadastros),1,br);
				}
				if(res=='n'){
					printf("salvamento cancelado");
				}
				if(res!='s'||res!='n'){
					printf("Não encontrado");
				}
			}while(res!='s'||res!='n');
		}
		if(opc<0||opc>3){
			printf("Opção não encontrada.");
			system ("pause");
			system ("cls");
		}
	}while(opc!=0);
		fclose(ab);
		fclose(rb);
		fclose(br);
 		return 0;// kaeritai
}
int produtos(opc){
	venda vendidos;
	int opca=0,id=0,n,quant;
	char continuar,res;
	FILE *a;
	FILE *r;
	FILE *rm;
	a=fopen("produtos.bin","ab");
	r=fopen("produtos.bin","rb");
	rm=fopen("produtos.bin","r+b");
	
	do{
		printf("Oque você deseja?\n 1 - Cadastrar produto\n 2 - Ver Produtos cadastrados\n 3 - Modificar dados do produto\n\n 0 - Voltar\n\n Sua Opção: ");
		scanf("%d",&opca);
		if(opca==1){//Cadastra o produto
			do{
				while(fread(&vendidos,sizeof(venda),1,r)){//define o id do item cadastrado			
					id++;
				}	
				printf("Digite o nome do produto: ");
				fflush(stdin);
				fgets(vendidos.nome,CAPACIDADE_MAXIMA,stdin);
				vendidos.nome[strlen(vendidos.nome)-1]='\0';
				printf("Digite o preço do produto: ");
				scanf("%f", &vendidos.valor);
				printf("Digite a quantidade em estoque: ");
				scanf("%d", &vendidos.quantide);
				system("cls");
				printf("Deseja salvar? s/n");
				scanf("%c",&continuar);
				system("cls");
				vendidos.idproduto=id;
				// confirmar dados do do produto
				printf("Confirmação de dados.\n Nome do produto: %s \n Quantidade em estoque: %d \n Preço: %.2f \n os dados estão corretos?s/n",vendidos.nome,vendidos.quantide,vendidos.valor);
				scanf("%c",&continuar);
				system("cls");
				while(continuar!='s'||continuar!='n'){
					printf("Não entendi, deseja salvar o Cadastro do Produto?s/n");
					scanf("%c",&continuar);
					system("cls");
					fwrite(&vendidos,sizeof(venda),1,a);
					id=0;
				}
				printf("Deseja cadastrar outro produto?");
				scanf("%c",&continuar);
			}while(continuar=='s');
		}
		if(opca==2){//Ver produtos cadastrados
			printf(" id produto \t Nome produto \t Quantidade em estoque \t Preço/n");	
			while((fread(&vendidos,sizeof(venda),1,r)!=EOF)==0){
				printf("%d/t/t%s/t/t%d/t/t%.2f/n",vendidos.idproduto, vendidos.nome, vendidos.quantide, vendidos.valor);
			}
			system("pause");	
		}
		if(opca==3){// Altera produtos cadastrados
			printf("Id do produto\tNome do produto\tQuantidade em estoque\tpreço\n");	
			while(fread(&vendidos,sizeof(venda),1,r)){
				printf("%d\t\t%s\t\t%d\t\t%.2f\n", vendidos.idproduto, vendidos.nome, vendidos.quantide, vendidos.valor);
			}
			printf(" Digite o ID do cliente que você quer modificar.");
			scanf("%d", &n);
			fseek(r,n*sizeof(venda),SEEK_SET);
			fread(&vendidos,sizeof(venda),1,r);
			system("cls");
			printf("Seu produto anterior era: %d\t\t%s\t\t%d\t\t%.2f\n", vendidos.idproduto, vendidos.nome, vendidos.quantide, vendidos.valor);
			printf("Digite a quantidade em estoque para adicionar ou retirar:");
			scanf("%d",&quant);
			vendidos.quantide+=quant;
			printf("Digite o preço do produto:");
			scanf("%d",&vendidos.valor);
			do{
				printf("Deseja salvar as alterações?s/n");
				fscanf("%c",&res);
				if(res=='s'){
					fseek(rm,n*sizeof(venda),SEEK_SET);
					fwrite(&vendidos,sizeof(venda),1,rm);
				}
				if(res=='n'){
					printf("salvamento cancelado");
				}
				if(res!='s'||res!='n'){
					printf("Não encontrado");
				}
			}while(res!='s'||res!='n');
		}
		if(opca<0||opca>3){
			printf("Opção não encontrada.");
			system ("pause");
			system ("cls");
		}
	}while(opca!=0);
	
	return 0;//kaeritai
}

int venda(opcao){
	renda lucro;
	venda vendidos;
	int idprod, qtd, i;
	FILE *cr;// cliente.bin rb
	FILE *crm;// cliente.bin r+b
	FILE *pr;// produtos.bin rb
	FILE *prm// produtos.bin r+b
	FILE *pvf// vendas.pvf ab
	
	cr=fopen("cliente.bin","rb");
	crm=fopen("cliente.bin","r+b");
	pr=fopen("produtos.bin","rb");
	prm=fopen("produtos.bin","r+b");
	pvf=fopen("vendas.pvf","ab");

	do{
		printf("Bem vindo a vendas.\n");
		printf(" id produto \t Nome produto \t Quantidade em estoque \t Preço/n");	
		while((fread(&vendidos,sizeof(venda),1,rb)!=EOF)==0){
			printf("%d/t/t%s/t/t%d/t/t%.2f/n",vendidos.idproduto, vendidos.nome, vendidos.quantide, vendidos.valor);
			}
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\t\t\tSeu Carrinho\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
		for(i=0;i<CAPACIDADE_MAXIMA;i++){
			printf()
		}
		printf("Digite o numero do item que quer comprar ou digite-1 para cancelar:");
		scanf("%d", &idprod);
		if(idprod==-1){
			return 0;// kaeritai
		}
		do{
			printf("Digite a quantidade do produto");
			scanf("%d",&qtd);
			fseek(rb,idprod*sizeof(venda),SEEK_SET);
			fread(&vendidos,sizeof(venda),1,rb);
			if((vendidos.quantide-=qtd)<0){
				printf("Não é possivel colocar no carrinho, essa quantidade exede o estoque.");
			}
		}while((vendidos.quantide-=qtd)<0)	;	
		
		
		
		printf( deseja );
	}while (res!='n'||res);
	return 0;//kaeritai
}
