#include <stdio.h>

int main() {
    char arr[] = "Hello World!";
    char arr_1[50];
    int i;

    for (i = 0; arr[i] != '\0'; i++) {
        arr_1[i] = arr[i];
    }

    arr_1[i] = '\0';

    printf("original string: %s\n", arr);
    printf("Copied string: %s\n", arr_1);

    return 0;
}
