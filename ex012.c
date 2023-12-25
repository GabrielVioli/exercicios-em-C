//quilowatt = salario minimo / 1000

//entrada:
//salario minimo
//quantidade de quilowatt consumida

//saída:
//valor em reais de cada quilowatt
//valor a ser pago pela residencia
//valor a ser pago com desconto de 15%

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    float SM;
    float KW;

    printf("insira o salario minimo: ");
    scanf("%f", &SM);
    printf("insira a quantidade de KW gasto: ");
    scanf("%f", &KW);

    float quilowatt = SM / 1000;
    float main_quilowatt = quilowatt * KW;

    printf("o valor de 1 KW:%.2f\n", quilowatt);
    printf("valor a ser pago:%.2f\n", main_quilowatt);
    printf("valor com desconto de 15 porcento:%.2f\n", main_quilowatt-(0.15 * main_quilowatt));

    return 0;
}