#include<stdio.h>
int main()
{
    int n;
    printf("enter the lenght of your array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("your array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d| ",array[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp = array[n-1-i];
        array[n-1-i] = array[i];
        array[i] = temp;
    }
     printf("\nyour array after reversal is\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d| ",array[i]);
    }

    return 0;
    
}