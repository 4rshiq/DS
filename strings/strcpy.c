#include<stdio.h>
int main()
{
    char string[50];
    char copy[50];
    printf("enter your string\n");
    scanf("%s",string);
    int i=0;
    while (string[i] != '\0')
    {
        copy[i]=string[i];
        i++;
    }
    copy[i]= '\0';
    printf("%s\n",copy);
    return 0;
}