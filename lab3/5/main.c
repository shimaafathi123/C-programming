#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c= getch();
    if(-32==c){

        printf("Extended character\n");
        c= getchar();
        printf("%c",c)

    }
    else{
        printf("Normal character\n");

    }
    return 0;
}
