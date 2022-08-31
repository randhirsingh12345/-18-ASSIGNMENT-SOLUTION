#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
     int k=comp(str1 ,str2);
     if(k==1)
        printf("String are identical ");
    else
        printf("Not identical ");
    getch();

}
int comp(char a[],char b[])
{
    if(strcmp(a,b))
        return 0;
    else
        return 1;
}
