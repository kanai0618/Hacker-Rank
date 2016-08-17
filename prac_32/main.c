#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,count=0,max=-99999,a[10000],k;
    gets(s);


    for(i=0;i<256;i++)
    {
        a[i]=0;
    }
    for(i=0;i<strlen(s);i++)
    {
        for(j=i;j<strlen(s);j++)
        {

            if(a[s[j]]==0)
            {
                count++;
                a[s[j]]=1;
            }
        }
        if(count>max)
        {
            max=count;
        }
        count=0;
        for(k=0;k<256;k++)
        {
            a[k]=0;
        }
    }
    printf("%d",max);
}
