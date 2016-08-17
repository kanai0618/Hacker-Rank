#include <stdio.h>
#include <stdlib.h>


void decode(char *a,char *s,int index,int i,int n,int x)
{
    if(i>=x)
        return ;
    if(index==n)
    {
        int k;
        s[n]='\0';
        printf("%s\n",s);

        return ;
    }
    else
    {


        for(i=0; i<x; i++)
        {
            s[index]=a[i];
            decode(a,s,index+1,i,n,x);
        }
    }



}

int main()
{
    printf("Hello world!\n");
    char a[10]="ab";
    char s[10];
    int i;
    for(i=0; i<strlen(a); i++)
    {
        s[0]=a[i];
        decode(a,s,1,0,4,2);
    }
    return 0;
}
