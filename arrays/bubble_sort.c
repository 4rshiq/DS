#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int array[],int n)
{
     for (int i = 0; i < n; i++)
    {   int sorted =1;
        for (int j = 0; j < n-1; j++)
        {
           if (array[j]>array[j+1])
            {
                swap(array+j,array+j+1);
                sorted =0;
            }
            
       }
       if (sorted)
       {
        break;
       }
       
    }
    for (int i = 0; i < n; i++)
    {
         printf("|%d|",array[i]);
    }
}
int main()
{
    int n;
    printf("enter the length of your array: ");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",array+i);
    }
    
    printf("your unsorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d|",array[i]);
    }
    printf("\nyour sorted array is\n");
    sort(array,n);
    return 0;
}