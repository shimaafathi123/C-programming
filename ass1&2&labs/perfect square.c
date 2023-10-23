#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, p=0;
    printf("Enter the (positive number): ");
    scanf("%d", &n);
    if(n<=0){
        printf("Error!! positive number only ");
    }
    else{
        for(int i=1; i*i<=n; i++){
            if (i*i==n){
                p=1;
            }
            else{
                p=0;

            }
        }
    }
    if(p){
        printf("The number you entered is perfect square");

    }
    else{
            printf("The number you entered is NOT perfect square");

    }
    return 0;
}
