//Write a function to check whether a given string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l;
    char str[20],rev[20],temp;
    printf("Enter a string : ");
    gets(str);
    strcpy(rev,str);
    l=strlen(str)-1;
    while(i<l)
    {
        temp=str[i];
        str[i]=str[l];
        str[l]=temp;
        i++;
        l--;
    }
    printf("The reverse string is : ");
    puts(str);
    printf("Origanal string is %s \n",rev);
    if(strcmp(str,rev))
        printf("String is not palindrome ");
    else
         printf("Sting is palindrome ");
    getch();
}
