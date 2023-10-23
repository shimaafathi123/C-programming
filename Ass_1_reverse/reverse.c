#include <stdio.h>
#include <stdlib.h>

int main()
{

        int num=0, reversed = 0;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num >= 0 && num < 10) {
            printf("The reverse of your number is: %d\n", num);
        } else {
            while (num) {
                reversed = reversed * 10 + num % 10;
                num /= 10;
            }
            printf("The reverse of your number is: %d\n", reversed);
        }


    return 0;
}
