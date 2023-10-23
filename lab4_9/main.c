#include <stdio.h>

int main() {
    char arr_1[] = "Hello, 123 World!";
    char arr_2[100];

    int i, j = 0;
    for (i = 0; arr_1[i] != '\0'; i++) {
        if ((arr_1[i] >= 'a' && arr_1[i] <= 'z') || (arr_1[i] >= 'A' && arr_1[i] <= 'Z')) {
            if (arr_1[i] >= 'a' && arr_1[i] <= 'z') {
                arr_2[j] = arr_1[i] - ('a' - 'A');
            } else {
                arr_2[j] = arr_1[i];
            }
            j++;
        }
    }
    arr_2[j] = '\0';

    printf("String after converting to capital case: %s\n", arr_2);

    return 0;
}
