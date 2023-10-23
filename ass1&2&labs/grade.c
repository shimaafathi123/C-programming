#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degree=0;
    printf("Enter Your degree to check grade: ");
    scanf("%f", &degree);
    if(degree<50){
        printf("Sorry but you Fail");
    }
    else if(degree>=50 && degree<65){
        printf("OK! You passed");
    }
    else if(degree>=65 && degree<75){
        printf("OK! You have GOOD");
    }
    else if(degree>=75 && degree<85){
        printf("OK! You have VERY GOOD");
    }
    else if(degree>=85 && degree<100){
        printf("WOW! You have EXCELLENT");
    }
    else{
        printf("YOU ENTERD A FALSE DEGREE!!");
    }
    return 0;
}
