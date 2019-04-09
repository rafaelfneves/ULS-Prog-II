/* Escreva uma função que calcule a soma dos números pares e a soma dos números impares de 0 até um
número inteiro n passado como parâmetro. A função deve exibir a soma dos pares e a soma dos
impares. */

#include <stdio.h>

int funcPar(int n);
int funcImpar(int n);

int main()
{
	int n=0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("\nSoma dos numeros pares: %d", funcPar(n));
	printf("\nSoma dos numeros impares: %d", funcImpar(n));
}

int funcPar(int n)
{
	int i,par=0;
	
	for(i=n;i>0;i--)
	{
		if(i % 2 == 0)
			par += i;
	}
	
	return par;
}

int funcImpar(int n)
{
	int i,impar=0;
	
	for(i=n;i>0;i--)
	{
		if(i % 2 != 0)
			impar += i;	
	}
	
	return impar;
}
