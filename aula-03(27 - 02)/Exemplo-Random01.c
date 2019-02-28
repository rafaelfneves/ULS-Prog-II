#include <stdio.h>

int cubo(int entrada);

int main(){
	int x = 2;
	printf("x eh %d\n", x);
	x = cubo(x);
	printf("x agora eh %d\n", x);
	return 0;
}

int cubo(int entrada){
	int saida = entrada * entrada * entrada;
	return saida;
}
