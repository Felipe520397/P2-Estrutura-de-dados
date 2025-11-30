#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 500) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
        i++; // incrementa
    }

    return 0;
}
