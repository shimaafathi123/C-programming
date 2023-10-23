#include <stdio.h>
#include <stdlib.h>
int floor(float num);
int main()
{
    float n,h;
    printf("Enter the number");
    scanf("%f",&n);
    printf("Enter the number");
    scanf("%f",&h);
    float sum =n+h;
    int floor(float num){
       int y=num;
       return y;
    }
    printf("After floor [%f]= %d",sum,floor(sum));
    return 0;
}
