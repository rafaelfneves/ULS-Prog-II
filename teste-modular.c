//bit.do/exercicioModular

#include<stdio.h>
#include<stdlib.h>

void func(int x, int opcao, int ocupada, int livre, int vaga[]);

int main(){
	int vaga[20]={0}; 
	int  x, opcao, ocupada, livre;
	
	// preencher o vetor com zeros (vaga livre)
	for(x=0; x<20; x++){
		vaga[x] = 0;
	}//fim-for

	do{
		system("cls"); // limpa a tela
		printf("MENU \n");
		printf("1-Visao Geral \n");
		printf("2-Registrar Entrada \n");
		printf("3-Registrar Saida \n");
		printf("4-Sair do programa \n");
		printf("Opcao: ");
		scanf("%d",&opcao);
		func(x,opcao,ocupada,livre,vaga);
	}while(opcao!=4);
	system("pause");
	return 0;
}//fim-main

void func(int x, int opcao, int ocupada, int livre, int vaga[])
{	
		if(opcao == 1)
		{
			system("cls"); // limpa a tela
			ocupada = 0; 
			for(x=0;x<20;x++){
				printf("%d", vaga[x]);
				if(vaga[x] == 1) ocupada++;
			}//fim-for
			printf("\nOcupadas = %d", ocupada);
			printf("\nLivres = %d \n", 20-ocupada);
			system("pause"); // aguarda tecla
		}//fim-opcao-1
		
		else if (opcao == 2)
		{
			//encontrar uma vaga
			livre = -1;  // sem vaga livre
			
			for(x=0; x<20; x++){
				if(vaga[x] == 0){
					livre = x;
					break; // encerra o loop for
				}
			}
			
			if(livre == -1){
				printf("Nao ha vagas! \n");
				system("pause");
			}else{
				printf("A vaga %d esta livre.\n", livre);
				printf("Usar? (1-sim/2-nao) ");
				scanf("%d",&x);
				if(x == 1){
					vaga[livre] = 1;
					printf("Entrada registrada! \n");
					system("pause");
				}//fim-if-usar
			}//fim-if-livre
		}//fim-opcao-2
		
		else if (opcao == 3)
		{
			printf("Qual vaga deseja liberar? (0-19) ");
			scanf("%d",&x);
			if( x<0 || x>19){ 
				printf("Vaga invalida! \n");
			}else if(vaga[x] == 0){
				printf("A vaga ja esta livre! \n");
			}else{
				vaga[x] = 0;
				printf("Vaga liberada! \n");
			}
			system("pause");
		}//fim-opcao-3
		

}


