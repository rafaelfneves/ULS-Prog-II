#include <stdio.h>

 int horas(int tempo);
 int minutos(int tempo, int horas1);
 int segundos(int tempo, int horas1, int minutos1);
int main()
{
 int tempo, horas1, minutos1, segundos1;

 printf("Entre com o numero de segundos: ");
 scanf("%d", &tempo);
 horas1= horas(tempo);
 minutos1= minutos(tempo, horas1);
 segundos1= segundos(tempo, horas1, minutos1);
    
 printf("\n%dh:%dm:%ds", horas1, minutos1, segundos1);
}

int horas(int tempo)
{
 //resultado da hora
 int hora= (tempo/3600);
 return hora;
}

int minutos(int tempo, int horas1)
{
 int minuto= (tempo-(3600*horas1))/60;
 return minuto;
}

int segundos(int tempo, int horas1 ,int minutos1)
{
 int segundo= (tempo-(3600*horas1)-(minutos1*60));
 return segundo;
}


