//Gasto de um cliente + 10% do garçom
#include <stdio.h>

float porc(float gasto);
float gastoF(float gasto);

int main(){
	float gF=0, gasto=0;
	
	printf("Digite o gasto do cliente: ");
	scanf("%f", &gasto);
	
	printf("Conta: %.2f \n", gastoF(gasto));
	
	return 0;
}

//Porcentagem
float porc(float gasto){
	float porcentagem;
	
	porcentagem = 10;
	
	return porcentagem;
}


//Gasto Final
float gastoF(float gasto){
	
	float gF = gasto + ((porc(gasto) * gasto)/100);
	return gF;
}
