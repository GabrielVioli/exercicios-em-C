//aumento de salário

#include <stdio.h>

int main() {
    float salario;
    float aumento;

    printf("Insira seu salario atual: ");
    scanf("%f", &salario);
    printf("insira o percentual do aumento salarial:");
    scanf("%f", &aumento);

    float div = aumento/100;
    float nov = div * salario;
    float new_sal = salario + nov;

    printf("seu novo salario sera de %.2fR$", new_sal);

    return 0;
}