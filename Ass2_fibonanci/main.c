#include <stdio.h>
#include <stdlib.h>

int fibo(int n);
int main()
{
    int size=0;
    printf("Enter the size of elements in fibonaci series: ");
    scanf("%d",&size);
    int fibo(int n){
        int arr[n];
        arr[0]=0;
        arr[1]=1;
        for(int i=2; i<n; i++){
                arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i=0; i<n; i++){
                printf("%d\t",arr[i]);
            }
    }
    fibo(size);
    return 0;
}
