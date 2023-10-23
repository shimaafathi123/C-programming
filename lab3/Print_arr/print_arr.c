#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

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
    for(int i = 0; i<size; i++){
        printf("THe element of [%d] is : %d \n", i, arr[i]);

   }
    return 0;
}
