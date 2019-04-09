#include  <stdio.h>
#include <math.h>


void xprimos( int vet[], int dentro);
int main()
{
 int primos[100];
 int primo_um;
 int nao_primo;
 int maxi;

 //coloca  dois primos;
 primos[0]=2;
 primos[1]=3;

//num de primos na lista
int dentro_primos=2;
int i;

printf("Digite em numero: ");
scanf("%d", &maxi);

for(i=5;i<=maxi;i++)
{
  primo_um=0;
  nao_primo=0;
  while(primo_um<dentro_primos && primos[primo_um] <sqrt(i) != nao_primo)
  {
    if(i % primos[primo_um]==0.0)
    { 
    nao_primo=1;
    // sai do if se nao for primo
    }
    primo_um++;
  }
  if(!nao_primo)
  {
    primos[dentro_primos]=i;
    dentro_primos++;
  }
}

 printf("Os numeros primos ate %d sao: \n", maxi);
 xprimos(primos, dentro_primos);
return 0;
}

void xprimos(int vet[], int dentro_primos)
{
 int i=0;
 while(i<dentro_primos)
 {
   printf("%d\n", vet[i]);
   i++;
 }
}


