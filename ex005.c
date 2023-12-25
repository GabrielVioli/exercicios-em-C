// calculadora

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int soma(int n1, int n2);
int divi(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    int n1; int n2; char op[20];

    printf("Numero: ");
    scanf("%d", &n1);
    printf("Numero: ");
    scanf("%d", &n2);

    char opc[4][20] = {"somar", "dividir", "subtrair", "multiplicar"};

    printf("---------\nESCOLHA UMA DAS OPÇÕES ABAIXO\n%s\n%s\n%s\n%s\n---------\n", opc[0], opc[1], opc[2], opc[3]);

    scanf("%s", op);

    if(strcmp(opc[0], op) == 0) {
        printf("%d",soma(n1, n2));
    }
    else if(strcmp(opc[1], op) == 0) {
        printf("%d",divi(n1, n2));
    }

    else if(strcmp(opc[2], op) == 0) {
         printf("%d",sub(n1, n2));
    }

    else if(strcmp(opc[3], op) == 0) {
         printf("%d",mult(n1, n2));

    }

    else {
        printf("invalido");
    }

    return 0;
}

int soma(int n1, int n2) {
    return n1 + n2;
}
int divi(int n1, int n2) {
    return n1 / n2;
}
int sub(int n1, int n2) {
    return n1 - n2;
}
int mult(int n1, int n2) {
    return n1 * n2;
}

