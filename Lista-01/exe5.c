#include <stdio.h>
#include <math.h>

int potencia(int base, int expoente);
int main()
{
int base , expoente , resultado;


printf("Entre com o valor da base:");
scanf("%d", &base);
printf("Entre com o valor do expoente:");
scanf("%d", &expoente);
 resultado = potencia(base,expoente);
printf("%d elevado a %d = %d", base, expoente,resultado);
return 0;
}

int potencia(int base, int expoente)
{
 int cont=0,result;
 if(expoente == 0)
   return 1;
 else
 return pow(base, expoente);
 }


