#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);

int main() {
    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers in the interval [%d, %d]:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d\t", i);
        }
    }

    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
