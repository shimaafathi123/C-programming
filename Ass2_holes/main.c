#include <stdio.h>
#include <stdlib.h>
int countHoles(int c);
int main()
{
    int num=0;
    printf("Enter the number please:  ");
    scanf("%d", &num);
    int countHoles(int c){
        int f=0;

        while(c!=0){
            int h= c%10;
            c=c/10;
            if(1==h||2==h||3==h||5==h||7==c){
                f+=0;
            }
            else if(0==h||4==h||6==h||9==h){
                f+=1;
            }
            else{
                f+=2;
            }
        }
        return f;
    }
    printf("The number of Holes for the [%d] is %d", num, countHoles(num));
    return 0;
}
