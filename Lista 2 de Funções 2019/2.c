#include <stdio.h>
#define tam 6
vet[tam] = {10, 52, 12, 65, 43};
int func();
int main(){
	printf("O maior valor dos vetores eh: %d", func());
	return 0;
}

int func(){
	int i;
	int maior=0;
	for(i=0;i<=tam;i++){
		if(vet[i]>maior)
			maior = vet[i];		
	}
	return maior;
}


