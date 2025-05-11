#include <stdio.h>

void factorial() {
    int num;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    // return 0;
}

