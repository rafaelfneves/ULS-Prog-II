#include <stdio.h>
#define tam 5
vet[tam] = {10, 52, 12, 65, 43};
int func();
int main(){
	printf("A diferenca eh de: %d", func());
	return 0;
}
int func(){
	int i;
	int maior=vet[0];
	int menor=vet[0];
	int diferenca=0;
	
	for(i=0;i<tam;i++){
		if(vet[i]<menor)
		{
			menor = vet[i];
		}		
		if(vet[i]>maior){
			maior = vet[i];	
		}	
	}
	diferenca = maior - menor;
	return diferenca;
}


