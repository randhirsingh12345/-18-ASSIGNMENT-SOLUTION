#include<stdio.h>
int main()
{
    char str[20],ch;
    int i,count=0;
    printf("enter a string : ");
    gets(str);
    printf("enter character : ");
    scanf("%c",&ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
            count++;
        i++;
    }
    printf("%c comes in a string %d times ",ch,count);
    getch();
    return 0;
}
