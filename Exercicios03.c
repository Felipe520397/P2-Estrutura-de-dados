#include <stdio.h>

int main() {
    int numero_secreto = 57; // você pode mudar o número
    int palpite = -1;

    printf("Tente adivinhar o numero secreto (1 a 100):\n");

    while (palpite != numero_secreto) {
        scanf("%d", &palpite);

        if (palpite > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        }
    }

    printf("Parabens! Voce acertou o numero secreto!\n");

    return 0;
}
