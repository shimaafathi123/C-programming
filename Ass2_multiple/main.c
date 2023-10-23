#include <stdio.h>
#include <stdlib.h>
int multiple();
int main()
{
    int x=0,y=0;
    printf("Enter the first number please: ");
    scanf("%d",&x);
    printf("Enter the second number please: ");
    scanf("%d",&y);
    int multiple(int x, int y){
        if(x%y==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if (multiple(x,y)){
        printf("Yes the first number is multiple for the second \n");
    }
    else{
        printf("No the first number is Not multiple for the second \n");

    }
    return 0;
}
