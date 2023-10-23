#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r=0;
    printf("Enter the redius of circle: ");
    scanf("%f",&r);
    float area = 3.14*r*r;
    float circ = 3.14*2*r;
    printf("The area of circle is : %f \n", area);
    printf("The circu of circle is : %f \n", circ);
    return 0;
}
