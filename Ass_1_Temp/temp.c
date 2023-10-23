#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c=0, f=0;
    printf("Enter the temprature degree in celsius\n");
    scanf("%f", &c);
    f= c*9/5+32;
    printf("The temprature degree in Fehren : %f\n", f);
    return 0;
}
