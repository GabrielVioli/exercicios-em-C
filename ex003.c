#include <stdio.h>
#include <stdlib.h>

#define dia 86400
#define hora 3600
#define semana0 604800
#define mes0 2592000
#define ano0 31104000

float minutos(float segundos);
float horas(float segundos);
float dias(float segundos);
float mes(float segundos);
float ano(float segundos);
float semana(float segundos);

int main(int argc, char *argv[]) {

    float segundos;

    printf("tempo em segundos: ");
    scanf("%f", &segundos);

    printf("---------\nO tempo em:\nSegundos: %.2f\nMinutos: %.2f\nHoras: %.2f\nDias: %.2f\nSemanas: %.2f\nMeses: %.2f\nAnos: %.4f\n---------", segundos, minutos(segundos), horas(segundos), dias(segundos), semana(segundos), mes(segundos), ano(segundos));
    return 0;
}

float minutos(float segundos) {
    float min = segundos / 60;
    return min;
}

float horas(float segundos) {
    float hor = segundos / hora;
    return hor;

}

float dias(float segundos) {
    int day = segundos / dia;
    return day;
}

float semana(float segundos) {
    int sema = segundos / semana0;
    return sema;
}

float mes(float segundos ) {
    int M = segundos / mes0;
    return M;
}

float ano(float segundos) {
    int an = segundos / ano0;
    return an;
}

