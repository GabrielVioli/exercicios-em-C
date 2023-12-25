#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    char vetor[9];

    for(int i = 0; i != 9; i++) {
        printf("insira o dado da posição %d\n", i + 1);
        scanf("%s", vetor);
        
        
    }



    return 0;
}