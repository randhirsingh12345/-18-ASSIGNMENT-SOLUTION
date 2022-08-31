//Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int d=0,a=0,i;
    char str[20];
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
            a=1;
        if(str[i]>='0'  && str[i]<='9')
            d=1;
            i++;
    }
    if(a==1 &&  d==1)
        printf("%s is alphanumeric ",str);
    else
        printf("%s is not alphanumeric ",str);
    getch();
}
