
#include <stdio.h>

#include "function_multiplicar.c"
#include "function_dividir.c"

int main() {

    int opc;
    int num1;
    int num2;
    int resultado;
    char continuar;

    do {

        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        if (opc >= 1 && opc <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);

            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }

        switch (opc) {

            case 1:
                resultado = num1 + num2;
                printf("Resultado: %d\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado: %d\n", resultado);
                break;

            case 3:
                resultado = dividir(num1, num2);
                printf("Resultado: %d\n", resultado);
                break;

            case 4:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %d\n", resultado);
                break;

            default:
                printf("Opcao indisponivel\n");
        }

        printf("\nDeseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Criado por Davi Sales\n");

    return 0;
}
