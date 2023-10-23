#include <stdio.h>
#include <stdlib.h>

int main()
{

        int num=0, count= 0,r=0;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num >= 0 && num < 10) {
            printf("The  number of digits is: 1\n");
        } else {
            while (num) {
                num /= 10;
                count++;
            }
            printf("The  number of digits is: %d\n", count);
        }


    return 0;
}
