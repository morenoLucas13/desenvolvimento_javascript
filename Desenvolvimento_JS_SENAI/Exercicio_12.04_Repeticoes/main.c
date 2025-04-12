#include <stdio.h>

int main() {
    int i = 1, j , x = 0, y = 2;

    while(i <= 6) {
        j = 1;
        while(j <= 3) {

            if(2 * j == i) {
                x = x + j;
                y = i;
            }

            j = j + 1;
            printf("j: %d", j);

        }

        i = i + 1;
        printf("i: %d\n", i);

    }
    printf("x: %d, y: %d", x, y);

    return 0;
}

// Teste de Mesa!

// I = 1, 2,
// J = 1, 2, 3, 4, 1
// X = 0, 1,
// Y = 2, 2,

// Tela do Computador:
// j:2 j:3 j:4 i:2
// j:2 j: