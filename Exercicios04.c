#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int saldo = 1000;
    int palpite, numero;
    
    srand(time(NULL)); // iniciar gerador aleatorio

    while (saldo > 0 && saldo < 3000) {
        numero = rand() % 10 + 1; // número entre 1 e 10

        printf("\nDigite seu palpite (1 a 10): ");
        scanf("%d", &palpite);

        if (palpite == numero) {
            saldo += 300;
            printf("Acertou! Seu novo saldo: %d\n", saldo);
        } else {
            saldo -= 100;
            printf("Errou! O numero era %d. Seu novo saldo: %d\n", numero, saldo);
        }
    }

    if (saldo <= 0) {
        printf("\nGAME OVER! Você perdeu todos os pontos.\n");
    } else {
        printf("\nPARABENS! Você atingiu 3000 pontos!\n");
    }

    return 0;
}
