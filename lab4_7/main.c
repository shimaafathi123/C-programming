#include <stdio.h>

int main() {
    char arr_1[50]="hellobb";
    int i;
    int c=0;

    for (i = 0; arr_1[i] != '\0'; i++) {
            c++;
    }


    printf("original string has: %d\n", c);

    return 0;
}
