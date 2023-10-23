#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    for(int i=0; i<=100; i++){
        sum+=i;
    }
    printf("The sum of first 100 integers is %d", sum);
    return 0;
}
