// maior entre dois numeros

#include <stdio.h>

int main() {

    float n1; float n2;

    printf("escreva o primeiro numero: ");
    scanf("%f", &n1);
    printf("escreva o segundo numero: ");
    scanf("%f", &n2);

    if(n1 > n2) {
        printf("o primeiro numero e maior que o segundo numero");
    }

    else if (n1 == n2) {
        printf("os dois numeros sao iguais");
    }

    else {
        printf("o segundo numero e maior que o primeiro numero");
    }

    return 0;
}