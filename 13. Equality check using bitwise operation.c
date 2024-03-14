#include <stdio.h>

int areEqual(int a, int b) {
    return !(a ^ b); // Returns 1 if a and b are equal, 0 otherwise
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (areEqual(num1, num2)) {
        printf("The numbers %d and %d are equal.\n", num1, num2);
    } else {
      
