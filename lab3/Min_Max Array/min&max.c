#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
   int size=0;
        printf("Enter The array size from 1 to 100:");
        scanf("%d",&size);
   int arr[size];

   for(int i = 0; i<size; i++){
        printf("Enter The array element:");
        scanf("%d",&arr[i]);
   }
   int mx= arr[0];
   int mn= arr[0];
   int x =0;

    for(int i = 0; i<size; i++){
        if (arr[i]>=mx){

            mx=arr[i];
        }
        else{
            mn=arr[i];
        }

   }
   printf("The max number is   : %d\n", mx);
   printf("The min number is   : %d\n", mn);
    return 0;
}
