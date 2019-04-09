/* Considerando a fórmula para o cálculo da distância entre dois pontos (x1; y1) e (x2; y2), escreva um
programa que contenha uma função que receba como parâmetros as coordenadas de dois pontos e
retorne a distância entre eles: */

#include <stdio.h>
#include <math.h>

int func(Xa,Xb,Ya,Yb);

int main()
{
	int Xa,Xb,Ya,Yb;
	
	printf("Digite Xa: ");
	scanf("%d",&Xa);
	printf("\nDigite Xb: ");
	scanf("%d",&Xb);
	
	printf("Digite Ya: ");
	scanf("%d",&Ya);
	printf("Digite Yb: ");
	scanf("%d",&Yb);
	
	printf("\nA distancia entre eles e de: %d metros",func(Xa,Xb,Ya,Yb));
}

int func(int Xa,int Xb,int Ya, int Yb)
{
	int n1=0,n2=0,pot1=0,pot2=0,D=0;
	
	n1 = Xa - Xb;
	pot1 = n1*n1;
	
	n2 = Ya - Yb;
	pot2 = n2*n2;
	
	D = sqrt(pot1 + pot2);
	
	return D;
}
