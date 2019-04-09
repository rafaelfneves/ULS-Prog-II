/*Escreva uma função chamada de potencia que calcula a potência entre dois números inteiros não
negativos (base e expoente) passados como parâmetros e retorna este valor. */

#include <stdio.h>

int potencia(base,exp);

int main()
{

	int base=0,exp=0;
	
	printf("Digite a Base: ");
	scanf("%d",&base);
	
	printf("Digite o expoente: ");
	scanf("%d",&exp);
	
	printf("\nA potencia sera: %d",potencia(base,exp));

	return 0;
}

int potencia(int base, int exp)
{
	
	int i,pot=base;
	
	for(i=0;i<=exp;i++)
	{
		pot *= base;
	}
	
	return pot;
}
