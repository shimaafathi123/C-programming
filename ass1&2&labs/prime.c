#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0,p=0;
    printf("Enter the (positive number) to check if it prime or not: ");
    scanf("%d", &n);
    if (1==n){
        printf("Not a prime\n");

    }
    else if(n<=0){

        printf("Error!! positive number only ");
    }
    else{

        for(int i=2; i<n; i++){
                if (n%i==0){
                    p=1;
                }


    }
    if (p){
            printf("The number you entered is NOT a PRIME\n");
    }
    else{
            printf("The number you entered is a PRIME\n");

    }


    }

    return 0;
}
