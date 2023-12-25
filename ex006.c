//media ponderada

#include <stdio.h>
#include <string.h>

#define lab 2
#define av 3
#define exa 5

int main() {

    float nota1; float nota2; float nota3;

    printf("trabalho do laboratorio: ");
    scanf("%f", &nota1);
    printf("avaliacao: ");
    scanf("%f", &nota2);
    printf("exame: ");
    scanf("%f", &nota3);

    float media_pond = ((nota1 * lab) + (nota2 * av) + (nota3 * exa)) / (lab + av + exa);

    
    if(media_pond >= 8.0 && media_pond <= 10.0) {
        printf("Nota A");
    }
    else if(media_pond >= 7.0 && media_pond <= 8.0) {
        printf("Nota B");
    }
    else if(media_pond >= 6.0 && media_pond <= 7.0) {
        printf("Nota C");
    }
    else if(media_pond >= 5.0 && media_pond <= 6.0) {
        printf("Nota D");
    }
    else if(media_pond >= 0.0 && media_pond <= 5.0) {
        printf("Nota E");
    }

    else {
        printf("invalido");
    }

    return 0;
}

