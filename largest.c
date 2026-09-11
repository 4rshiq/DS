#include<stdio.h>
int main()
{
    int n,largest;
    printf("enter the length of your array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of your array");
    for (int i = 0; i < n; i++)
    {
            scanf("%d",&array[i]);
    }
    largest = array[0];
    for (int i = 0; i < n; i++)
    {
            if (array[i]>largest)
            {
                largest = array[i];
            }
    }
    printf("%d is the largest element in the array\n",largest);
    
    return 0;
}
