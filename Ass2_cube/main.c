#include <stdio.h>

void cube(int number) {
    int cube = number * number * number;
    printf("The cube of %d is %d\n", number, cube);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    cube(number);

    return 0;
}
