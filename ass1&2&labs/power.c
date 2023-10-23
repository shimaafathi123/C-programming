#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1, p=1,result=1;

    printf("Enter the number please: ");
    scanf("%d",&n);
    if (0==n){
        printf("The all result will be ZERO!!");
        return 1;
    }
    printf("Enter the power please: ");
    scanf("%d",&p);
    if (0==p){
        printf("The all result will be One!!");
        return 1;
    }
    for (int i=1; i<=p; i++){
        result*=n;
    }
    printf("The power %d of the %d is: %d",p,n,result);
    return 0;
}
