#include<stdio.h>

int trocamaior(int num[]);
int trocamenor(int num[]);
int main()
{
int num[80], result, cont, a, b, i, maior=0, menor=999;
	
	
	for(i=0;i<80;i++)
	{
	printf("entre com o %d numero do vetor:", cont++);
	scanf("%d", &num[i]);
    }
	
	int maior1=trocamaior(num);
    int menor1=trocamenor(num);
    
	num[0]=maior1;
	num[79]=menor1;
	for(i=0;i<80;i++)
	{
	printf("%d",num[i]);
    }
return 0;
}

int trocamaior(int num[])
{
	int i, maior=0;
	for(i=0;i<80;i++)
    {
    	if(num[i] >maior) maior=num[i];
	}
	return maior;
}


int trocamenor(int num[])
{
	int i, menor=999;
for(i=0;i<80;i++)
    {
    	if(num[i]<menor) menor=num[i];
	}
	return menor;
}



