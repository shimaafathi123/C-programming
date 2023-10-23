#include <stdio.h>
#include <stdlib.h>
char converAlpha();
int main()
{
    char a='a';
    printf("Enter the character please: ");
    scanf(" %c", &a);
    char converAlpha(char x){
        if(x>=97&& x<=122){
            x-=97;
            x+=65;
        }
    }
    printf(" %c",converAlpha(a));
    return 0;
}
