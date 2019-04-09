/* Desenvolva um programa para gerar uma matriz que corresponda a uma tabela de multiplicar de 1 até 9. */
#include <stdio.h>

int main(){
	int i, matriz[9][3], multiplicado;
	printf ("Insira o numero a ser multiplicado: ");
	scanf ("%d", &multiplicado);
	for(i = 0; i < 9; i++){
		matriz[i][0] = i+1;
		matriz[i][1] = multiplicado;
		matriz[i][2] = matriz[i][0] * matriz[i][1];
		if (i == 0) printf ("\nMULTIPLICANDO %d:\n", multiplicado);
		printf ("%d\tx\t%d\t=\t%d\n", matriz[i][0], matriz[i][1], matriz[i][2]);
	}
	return 0;
}
