#include<stdio.h>
#include<string.h>
int main ()
{   int i =0,j=0;
    char a[50];
    printf("enter string one: ");
    scanf("%s",a);
    while (a[i] != '\0')
    {
        i++;
    }
    a[i++]= ' '; //post increment;  white space is assigned and then i is incremented
    char b[30];
    printf("enter string two: ");
    scanf("%s",b);
    while (b[j] != '\0')
    {
        a[i++]= b[j++];
    }
    a[i] ='\0';
    printf("The concatenated value is :%s\n",a);
return 0;
}