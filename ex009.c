// percentual de lucro


#include <stdio.h>

float Percent_Lucro(float fab_price,float final_price) {
    float lucro = final_price - fab_price;
    float percentual_lucro = (lucro / final_price) * 100;
    return percentual_lucro;
}

int main() {
    float fabrica_prec; float final_price_input;

    printf("insira o preço de fabrica do veículo: ");
    scanf("%f", &fabrica_prec);
    printf("insira o valor final do veículo: ");
    scanf("%f", &final_price_input);

    printf("%.2f",Percent_Lucro(fabrica_prec, final_price_input));

}