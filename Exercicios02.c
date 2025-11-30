#include <stdio.h>

int main() {
    int opcao;
    int contador = 0;
    float total = 0;

    while (contador < 5) {
        printf("\n================ MENU DE ITENS ================\n");
        printf("Opcao\tItem\t\tPreco\n");
        printf("1\tCamisa\t\tR$ 40,00\n");
        printf("2\tCalca\t\tR$ 80,00\n");
        printf("3\tCinto\t\tR$ 25,00\n");
        printf("4\tSapatos\t\tR$ 120,00\n");
        printf("5\tChapeu\t\tR$ 35,00\n");
        printf("0\tFinalizar\n");
        printf("===============================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;  // finaliza imediatamente se o usuário quiser
        }

        switch (opcao) {
            case 1:
                total += 40;
                contador++;
                printf("Camisa adicionada! (%d/5)\n", contador);
                break;
            case 2:
                total += 80;
                contador++;
                printf("Calca adicionada! (%d/5)\n", contador);
                break;
            case 3:
                total += 25;
                contador++;
                printf("Cinto adicionado! (%d/5)\n", contador);
                break;
            case 4:
                total += 120;
                contador++;
                printf("Sapatos adicionados! (%d/5)\n", contador);
                break;
            case 5:
                total += 35;
                contador++;
                printf("Chapeu adicionado! (%d/5)\n", contador);
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                continue; // não conta tentativa
        }
    }

    printf("\n===============================================\n");
    printf("Total da compra: R$ %.2f\n", total);
    printf("===============================================\n");

    return 0;
}
