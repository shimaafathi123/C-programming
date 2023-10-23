#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0;
    printf("Enter th first number: ");
    scanf("%d", &n1);
    printf("Enter th second number:");
    scanf("%d", &n2);
    int result = ((n1+n2)*3)-10;
    printf("The result of your operation is : %d \n", result);

    return 0;
}
