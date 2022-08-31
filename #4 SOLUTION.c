//Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    int d=0,a=0,i;
    char str[20];
    printf("Enter a string in Lower case : ");
    gets(str);
    while(str[i]!='\0')
    {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
           i++;
    }
        printf("String in upper case is %s ",str);
    getch();
}
