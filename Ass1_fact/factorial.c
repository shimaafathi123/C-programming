#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0, fact=1;
    printf("Enter the (positive number): ");
    scanf("%d", &n);
    if(n<=0){

        printf("Error!! positive number only ");
    }
    else{

        for(int i=1; i<=n; i++){
                fact*=i;

    }
        printf("The factorial for the %d is %d",n,fact);

    }
    return 0;
}
