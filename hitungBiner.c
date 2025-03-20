#include <stdio.h>
#include "hitungbiner.h"

void convertToBinary(int number) {
    Stack *s = createStack();
    int step = 1; // Menambahkan langkah tracking

    printf("Proses konversi:\n");
    printf("Step\tDecimal\tBinary Bit\n");
    printf("--------------------------------\n");

    while (number > 0) {
        int bit = number % 2;
        push(&s, bit);

        // Menampilkan tracking setiap langkah konversi
        printf("%d\t%d\t%d\n", step, number, bit);
        step++;

        number /= 2;
    }

    printf("\nHasil konversi biner: ");
    while (!isEmpty(s)) {
        printf("%d", pop(&s));
    }
    printf("\n");

    freeStack(&s);
}

