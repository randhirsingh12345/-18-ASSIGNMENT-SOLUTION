//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);
   int k=count_word(str);
   printf("Total number of word in a given string is %d ",k);
    getch();
}
int count_word(char str[])
{
    int i=0, count=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]!=' ')
            count++;
        i++;
    }
    return count;
}

