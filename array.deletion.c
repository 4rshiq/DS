#include <stdio.h>
void array_deletion(int a[], int n);
int main()
{
    int n;

    printf("enter the length of your array\n");
    scanf("%d", &n);
    int a[n];
    array_deletion(a, n);
}
void array_deletion(int a[], int n)
{
    int pos;
    printf("enter the elements of your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d|", a[i]);
    }

    printf("\nenter the position you want to delete element from\n");
    scanf("%d", &pos);
    
    for (int i = pos-1; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    printf("\nyour new array is :\n");

    for (int i = 0; i < n; i++)
    {
        printf("|%d|", a[i]);
    }
}