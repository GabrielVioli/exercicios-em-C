//média entre numeros

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    int quantidade; float N; float N2;
    
    printf("quantidade: ");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++){
        printf("nota %d:", i + 1);
        scanf("%f", &N);
        N2 = N2 + N;
    }

    printf("a média entre as notas é %.2f", N2/quantidade);

    return 0;
}