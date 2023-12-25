// calculo salarial
#include <stdio.h>

int valor_hora_trabalhada(float salario_minimo);
int salario_bruto(float horas_trabalhadas, float valor_hora_trabalhada);
int imposto(float salario_bruto);
int salario_receber(float salario_bruto, float imposto);

int main() {
    float horas_trabalhadas;
    float salario_minimo;
    
    printf("Insíra o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("insíra o valor do salário minimo: ");
    scanf("%f", &salario_minimo);

    float vht = valor_hora_trabalhada(salario_minimo);
    float sb = salario_bruto(horas_trabalhadas, vht);
    float im = imposto(sb);
    float sar = salario_receber(sb, im);


    printf("Salario a receber: %.2f", sar);

    return 0;
}

int valor_hora_trabalhada(float salario_minimo) {
    return salario_minimo / 2;
}

int salario_bruto(float horas_trabalhadas, float valor_hora_trabalhada) {
    return horas_trabalhadas * valor_hora_trabalhada;
}

int imposto(float salario_bruto) {
    return 0.03 * salario_bruto;
}

int salario_receber(float salario_bruto, float imposto) {
    return (salario_bruto - imposto) - 1;
}