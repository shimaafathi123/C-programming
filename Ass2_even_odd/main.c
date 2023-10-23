#include <stdio.h>
#include <stdlib.h>
int even_odd();
int main()
{
    int x=0;
    printf("Enter the number to check even or odd: ");
    scanf("%d", &x);
    int even_odd(int n){
        if(n%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    if(even_odd(x)){
            printf("Your number %d is even and output is %d", x,even_odd(x));
    }
    else{
            printf("Your number %d is odd and output is %d",x,even_odd(x));

    }

    return 0;
}
