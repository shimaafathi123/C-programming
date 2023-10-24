#include <stdio.h>
#include <stdlib.h>
void swap_1(int* x, int* y);
int main()
{
    int n1=0, n2=0;
    printf("Enter the first number before swap: ");
    scanf("%d",&n1);
    printf("Enter the second number before swap: ");
    scanf("%d",&n2);
    swap_1(&n1,&n2);
    printf("The first number after swap: %d\n",n1);
    printf("The second number after swap: %d\n",n2);


    return 0;
}
void swap_1(int* x, int* y){

    int temp=0;
    temp= *x;
    *x= *y;
    *y= temp;
}
