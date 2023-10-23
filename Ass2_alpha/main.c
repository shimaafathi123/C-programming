#include <stdio.h>

int isAlphabet(char character) {
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        return 1;
    }
    else{
                return 0;

    }

}

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    if (isAlphabet(inputChar)) {
        printf("%c is an alphabet.\n", inputChar);
    } else {
        printf("%c is not an alphabet.\n", inputChar);
    }

    return 0;
}
