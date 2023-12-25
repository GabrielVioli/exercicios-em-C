// somatória entre numeros

#include <stdio.h>

int main(int argc, int *argv[]) {

    int soma = 0;
    int cont = 0;

    for(cont; cont <= 10; cont++) {
        soma = soma + cont;
    }

    printf("%d", soma);

    return 0;
}