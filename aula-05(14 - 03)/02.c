02#include <stdio.h>
#define tam 3

int vet[tam];
int i=0;

void trocamaior(int pos);

int main(){
	 
	// Ler o vetor
	for(i=0;i<tam;i++){
		printf("[%d]: ", i);
		scanf("%d",&vet[i]);
	}	
	
	trocaMaior(0); // trocar usando a funcao trocaMaior
	// mostrar o vetor modificado
	
	return 0;
}

void trocamaior(int pos){
	
	int posMaior = 0,maior=0;
	
	// verificar qual o maior e sua posição
	for(i=0;i<tam;i++){
		if(vet[i] > maior){
			maior = vet[i];
			posMaior = i;
		}
	}	 
	
	//  valores
	int temp = vet[i];
	vet[i] = vet[posMaior];
	vet[posMaior] = temp;
	vet[pos] = vet[posMaior]; 
}






