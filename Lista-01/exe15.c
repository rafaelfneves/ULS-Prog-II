#include<stdio.h>

int func(int *a, int *b);
	
int main()
{
int dividendo, divisor, result, a, b;
	
	printf("entre com o dividendo:");
	scanf("%d", &dividendo);
	
    printf("entre com o divisor:");
	scanf("%d", &divisor);
	
	
	
	result= func(&dividendo, &divisor);
	
	printf("%d", result);
	return 0;

}

int func(int *a, int *b)
{
	int resto= *a % *b;
	return resto;
}
	

