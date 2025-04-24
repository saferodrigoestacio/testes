#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("\n");

    // while
    printf("ESTRUTURA WHILE...\n");
    int num = 0;
    while(num <= 10) {
        
        if (num % 2 == 0) {
            printf("o número %d é par! \n", num);
        }

        num++;
    }
    printf("\n");

    // do while
    printf("ESTRUTURA DO-WHILE...\n");
    int num2;
    do {
        printf("Digite um número par para sair do programa... \n");
        scanf("%d", &num2);

        if (num2 % 2 == 0) {
            printf("%d é par! \n", num2);
        } else {
            printf("%d é ímpar! \n", num2);
        }

    } while(num2 % 2 != 0);
    printf("Você digitou um número par! \n");
    printf("\n");

    // for
    printf("ESTRUTURA FOR...\n");
    int numero, i;

    printf("Digite um número para calcularmos a tabuada... \n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }
    printf("\n");

    return 0;
}
