#include <stdio.h>

float porc(float sal);
float bonusF(float sal);
float salFinal(float sal);

int main(){
	float salF, sal;
	
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	
	printf("O bonus eh de: %.2f \n", bonusF(sal));
	printf("O salario final eh de: %.2f", salFinal(sal));
	
	return 0;
}

//Porcentagem
float porc(float sal){
	float porcentagem;
	
	if(sal > 1500){
		porcentagem = 10;
	} else {
		porcentagem = 5;
	}
	
	return porcentagem;
}

//Bonus Final
float bonusF(float sal){
	
	float bonus = (sal * porc(sal)) / 100;
	return bonus;
}

//Salario Final
float salFinal(float sal){
	
	float salF = bonusF(sal) + sal;
	return salF;
}


