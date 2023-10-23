#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    char arr[10]="aabbsjgijl";
    for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(arr[i]==arr[j]){
                    c++;
                }
            }
            printf("the character of[%c]=: %d\n", arr[i],c);
            c=0;
    }
    return 0;
}
