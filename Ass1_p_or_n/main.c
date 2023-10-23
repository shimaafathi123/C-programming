#include <stdio.h>

int checkSign(int number) {
    if (number > 0) {
        return 1;
    } else if (number < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    int sign = checkSign(inputNumber);

    if (sign == 1) {
        printf("%d is a positive number.\n", inputNumber);
    } else if (sign == -1) {
        printf("%d is a negative number.\n", inputNumber);
    } else {
        printf("%d is neither positive nor negative; it's zero.\n", inputNumber);
    }

    return 0;
}
