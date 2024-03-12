#include <stdio.h>

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, base = 1, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        base *= 2;
        binaryNumber /= 10;
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));

    return 0;
}
