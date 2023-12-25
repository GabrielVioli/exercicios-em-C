//preço de um carro

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float dist_lucro(float valor_final, float fab_price);
float imp_value(float fab_price, float percent_imp);
float final_price(float fab_price, float percent_lucro);

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    float fab_price; float percent_lucro; float Percent_imp;
    printf("Insíra o valor de fábrica do veículo: ");
    scanf("%f", &fab_price);
    printf("insíra o percentual de lucro do distribuidor: ");
    scanf("%f", &percent_lucro);
    printf("insíra o percentual de impostos do veículo: ");
    scanf("%f", &Percent_imp);

    system("cls");

    float valor_imposto = imp_value(fab_price, Percent_imp);
    float valor_final =  final_price(fab_price, percent_lucro) + valor_imposto;

    printf("lucro do distribuidor: %.2f\n", dist_lucro(valor_final, fab_price) - valor_imposto);
    printf("valor dos impostos: %.2f\n", imp_value(fab_price, Percent_imp));
    printf("preço final do veículo: %.2f\n", valor_final);

    return 0;
}

float dist_lucro(float valor_final, float fab_price) {
    return (valor_final - fab_price);
}

float imp_value(float fab_price, float percent_imp) {
    return fab_price * (percent_imp / 100);

}

float final_price(float fab_price, float percent_lucro) {
    return fab_price + (fab_price * (percent_lucro/100));
}
