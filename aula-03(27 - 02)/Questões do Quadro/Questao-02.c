//Faça uma função que converta de Real para Dolar e retorne o valor de dolar
#include <stdio.h>

float conversao(float real, float vDolar);

int main(){
	
	float real=10;
	float vDolar = 4;
	
	printf("Real: %.2f\nValor do Dolar: %.2f \nConversao de Real para dolar eh de: %.2f",real,vDolar,conversao(real,vDolar));
	
	return 0;
}

float conversao(float real, float vDolar){

	float conv = real / vDolar;
	
	return conv;
}
