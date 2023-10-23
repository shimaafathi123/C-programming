void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int var1, var2;
    printf("Enter Value of var1 ");
    scanf("%d", &var1);
    printf("\nEnter Value of var2 ");
    scanf("%d", &var2);
    swap(&var1, &var2);
    printf("\nAfter Swapping: var1 = %d, var2 = %d", var1, var2);
    return 0;
}
