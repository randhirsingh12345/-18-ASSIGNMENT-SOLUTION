
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string : ");
    gets(str);
    printf("String are in reverse order:  ");
    reverse(str);
    getch();
}
void reverse(char str[])
{
    int l;
    l=strlen(str);
    for(l=l-1;l>=0;l--)
        printf("%c",str[l]);
    return 0;
}
