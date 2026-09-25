#include<stdio.h>
int main ()
{   
    int i =0, j=0,len=0;
    char b[50];
    printf("enter the string: ");
    scanf("%s",b);
    char a[50];
    printf("enter the substring: ");
    scanf("%s",a);
    
    while (a[len] != '\0')
    {
        len++;
    }
    
    
    while ( b[i] != '\0')
    {
        if (b[i]== a[j])
        {
            j++;
            i++;
        }
        else
        {
            i++;
        }
        
    }
    j==len ? printf("is a substring\n") : printf("not a substring\n");

    // if (j== len)
    // {
    //     printf("is a substring\n");
    // }
    // else
    // {
    //     printf("not a substring\n");

    // }   
}