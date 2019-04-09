/* Usando a função fatorial do item (a), escreva um programa que capture via teclado dois números
inteiros, representando n e k, e imprima o valor do número total de arranjos, An,k. Pode-se
assumir que o usuário sempre fornecerá valores válidos.*/
#include <stdio.h>

int fat(n1);
int fat2(n2);

int main()
{
	int n1=0,n2,k=0;
	
	printf("Digite N: ");
	scanf("%d",&n1);
	printf("Digite K: ");
	scanf("%d",&k);
	
	n2 = n1 - k;
	
	printf("\nO fatorial vai ser: %d", fat(n1)/fat2(n2));
	
	return 0;
}

int fat(int n1)
{
	int fat;
	
	for(fat = 1; n1 > 1; n1--)
	{
		fat *= n1;
	}

	return fat;
}

int fat2(int n2)
{
	int fat2;
	
	for(fat2 = 1; n2 > 1; n2--)
	{
		fat2 *= n2;
	}

	return fat2;
}
