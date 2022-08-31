
#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    int length;
    length=len_of_string(str);
    printf("Length of string %d ",length);
    getch();
}
int len_of_string(char str[])
{
    int i=0,l=0;
    while(str[i]!='\0')
    {
        l++;
        i++;
    }
    return l;
}
