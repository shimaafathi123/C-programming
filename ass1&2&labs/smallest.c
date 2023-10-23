#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0, n3=0, s=0;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    printf("Enter the third number: ");
    scanf("%d",&n3);


    if (n1<n2 && n1<n3){
        s=n1;
    }
    else if (n2<n1 && n2<n3){
        s=n2;
    }
    else{
        s=n3;
    }

    printf("The smallest number = %d",s );

    return 0;
}
