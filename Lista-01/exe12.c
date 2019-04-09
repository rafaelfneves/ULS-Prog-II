#include<stdio.h>
int vet[5],pc,i,j;
int confi();
int main(){
(vet);
for(i=0;i<5;i++){
	printf("Digite o valor %d do vetor: ", i+1);
	scanf("%d",&vet[i]);
}
printf("Digite o numero para ser pesquisado dentro do vetor:");
scanf("%d",&pc);
confi();
return 0;
}
int confi(){
	j=0;
	for(i=0;i<5;i++){
		if (vet[i]==pc){
			printf("O valor procurado %d está na posição %d do vetor",pc,vet[i]);
		}
		else j++;
	}
	if(j==5){
		printf(" O valor %d não foi achado no vetor.",pc);
	}
	return 0;
}
