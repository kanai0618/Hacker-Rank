#include<stdio.h>
#include<string.h>
int main()
{
    char s[10]="1245";
    int num=0,i;
    for(i=0;i<strlen(s);i++)
    {
        num=num*10+(s[i]-48);
    }
    printf("%d",num);
}
