#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // If the number is divisible by any number other than 1 and itself, it's not prime
        }
    }
    return 1; // If the loop completes without finding any divisor, the number is prime
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
