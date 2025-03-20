#include <stdio.h>
#include "hitungbiner.h"

int main() {
    int number;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &number);
    convertToBinary(number);
    return 0;
}

