#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0;
    printf("Enter The first number please: ");
    scanf("%d", &n1);
    printf("Enter The second number please: ");
    scanf("%d", &n2);
    if (n1 == n2){

        printf("The Two numbers are equal\n");

    }
    else if (n1>n2){

        printf("The Two numbers are not equal and n1 higher than n2\n");

    }
    else{

        printf("The Two numbers are not equal and n2 higher than n1\n");

    }
    return 0;
}
