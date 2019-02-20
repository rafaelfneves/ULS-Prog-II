#include <stdio.h>

int main() {

  //Var
  int i,num[10],x;
  
  //Inicio
  for(i=0;i<10;i++)
  {
  	printf("\nDigite o numero %d - ",i);
    scanf("%d", &num[i]);
  }
    
  //Meio

  	printf("\nDigite o numero a ser comparado: ",i+1);
  	scanf("%d", &x);
  
  //FIM	
  	for(i=0;i<10;i++)
	{
	  if(num[i] % x == 0)
	  
	  	printf("O numero %d e divisivel por %d e esta na posicao %d\n",num[i],x,i);
	  
	}
  
  return 0;
}

