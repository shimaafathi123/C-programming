#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2

int main()
{
    int sum=0;
    int arr[ROW][COL];
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            printf("Enter the element: ");
            scanf("%d", &arr[i][j]);
        }

    }
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COL; j++){
            sum+=arr[i][j];
        }
        printf("The average for ROW no [%d] is %f \n",i+1,(float)sum/COL);
        sum=0;
    }
    return 0;
}
