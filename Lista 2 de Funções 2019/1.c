#include <stdio.h>
int vet[6] = {-5, -4, 1, 3, 2, -3};
int somaNegativos();
int main()
{
	int x;
	x = somaNegativos();
	printf("A soma dos negativos e: %d", x);
	return 0; 
}

int somaNegativos()
{
	int i,soma=0;
	for(i=0;i<=6;i++)
	{
		if(vet[i]<0)
		{
			soma += vet[i];
		}
	}
	return soma;
}
