#include<stdio.h>

void triangulo(int a, int b, int c);
int main()
{
 int a, b, c;

 printf("Entre com o lado a: ");
 scanf("%d", &a);
 printf("Entre com o lado b: ");
 scanf("%d", &b);
 printf("Entre com o lado c: ");
 scanf("%d",&c);
triangulo(a,b,c);

return 0;

}

void triangulo(int a, int b, int c)
{
 if(a==b&&a!=c) printf("E um triangulo retangulo");
 else   printf("NAO e um triangulo retangulo");
}




