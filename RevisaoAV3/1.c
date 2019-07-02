//RESPOTA: 5 0 2 2.0
// teste de mesa 1
    #include <stdio.h>
     
    float aula(int a, int b);
    void troca(int tam, int *a);
    
    int main() {
        int tam = 0, *aux, b = 5;
        float teste;
        aux = &b;
        printf("%d \n", *aux);
        troca(tam, &b);
        printf("%d %d\n", tam, b);
        teste = aula(tam, *aux);
        printf("%f", teste);
        return 0;
    }
    
    float aula(int a, int b) {
        return b / (a + 1);
    }
     
    void troca(int tam, int *a) {
        int b = tam + 2;
        *a = b;
        tam = *a;
    }
