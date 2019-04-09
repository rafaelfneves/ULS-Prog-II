#include<stdlib.h>
#include<stdio.h>
const int TAM = 37;
int vooS[TAM];
int lugsdisp[TAM];
void lervoos();
int buscavoo(int voo);
int main (){
	int ID, numvoo;
printf("Informe a ID");
scanf ("%d",&ID);
 while(ID!=9999);
 {
 	scanf("%d", &numvoo);
	 int pos=buscavoo(numvoo);
	 if(pos==-1)
	  printf("voo Não existe !");
 
 else{
 	if(lugsdisp[pos]>0){
 		printf("id %d", ID);
 		lugsdisp[pos]--; 
	 }
	 else{ 
	printf("voo lotado");
	printf("Informe id");
	scanf("%d",&ID);
	}
	 
	  }
}
	  return 0;
}
int buscavoo(int voo)
{
	for(int i=0;i<TAM;i++)
		if(vooS[i]==voo)
			return i;
	return -1;		
}
void lervoos()
{
	int i;
	for (i=0;i<TAM;i++)
	{
		printf("Informe o nome do voo");
		scanf("%d",&vooS[i]);
		printf("disponibilidade");
		scanf("%d",&lugsdisp[i]);
	}
}
