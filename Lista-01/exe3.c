#include <stdio.h>

int media(int a, int b);
int media_pond(int a, int b);

int main()
{
	int a, b, media1,media1_pond ;
	char letra;
	
	printf("entre com a nota a:");
	scanf("%d", &a);
	
	printf("entre com a nota b:");
	scanf("%d", &b);
	printf("entre com a letra:");
	scanf("%c", &letra);
	if(letra=='a'||letra=='A')
	{
	media1=media(a,b);
	printf("%d", media1);
	}
	else if(letra=='p'||letra=='P')
	{
	media1_pond= media_pond(a,b);
	printf("%d",media1_pond);
    }
	else
	printf("letra invalida");
	
return 0;
}

int media(int a, int b)
{
	int result=(a+b)/2;
	return result;
}

int media_pond(int a, int b)
{
	int result=((a*5)+(b*3))/8;
	return result;
}



