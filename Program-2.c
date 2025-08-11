#include <stdio.h>

void checkEvenOdd(int n) {
    printf("\nEven-Odd Check up to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        (i % 2 == 0) ? printf("%d is Even\n", i) : printf("%d is Odd\n", i);
    }
}

void factorial() {
    int n, fact = 1;

    printf("\nEnter a number to calculate factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", n, fact);
}

int main() {
    int limit;

    printf("Enter the limit to check Even/Odd numbers: ");
    scanf("%d", &limit);

    checkEvenOdd(limit);
    factorial();         

    return 0;
}