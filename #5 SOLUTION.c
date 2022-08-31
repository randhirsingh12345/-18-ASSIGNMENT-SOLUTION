
//Write a function to transform string into Lower case
#include<stdio.h>
#include<string.h>
int main()
{
    int d=0,a=0,i;
    char str[20];
    printf("Enter a string in Upper  case : ");
    gets(str);
    while(str[i]!='\0')
    {
            if(str[i]>='A' && str[i]<='Z')
                str[i]=str[i]+32;
           i++;
    }
        printf("String in Lower case is %s ",str);
    getch();
}
