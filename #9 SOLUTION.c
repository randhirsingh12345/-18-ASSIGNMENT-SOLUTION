#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]=" my name is randhir";
    //printf("Enter string ");
    //gets(str);
    int i=0,start=0,end=0,flag=0;
    while(str[i]!='\0')
    {
        while(str[i]!=' ')
        {
            if(str[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;

        }
        swap(str,start,end-1);
        if(flag == 1)
            break;
            start=end++;
            i++;
    }
        swap(str,0,i-1);
        printf("%s",str);
        getch();
        return 0;

}
void swap(char a[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

