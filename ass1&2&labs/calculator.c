#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    char cal= 'a';
    printf("Enter the operate sign: ");
    scanf(" %c",&cal);
    switch(cal){
    case '+':
        printf("The result of sum is %d \n", n1+n2);
        break;
    case '-':
        printf("The result of subtraction is %d \n", n1-n2);
        break;

    case '*':
        printf("The result of multiplication is %d \n", n1*n2);
        break;

    case '/':
        if (0==n2){
            printf("ERROR!! can't divide by ZERO!!\n");
            break;
        }
        else{
        printf("The result of division is %f \n", (float)n1/n2);
            break;
        }
    default:
        printf("The result of division is %f \n", (float)n1/n2);

        break;
    }


    return 0;
}
