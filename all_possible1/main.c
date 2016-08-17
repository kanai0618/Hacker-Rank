#include <stdio.h>
#include <stdlib.h>
int count[100]={0};
int p=0;


int rec(char s[],char f[],int i,int n,char k,int l)
{

if(i>n)
    return 0;



    if((i==n)&&(count[p]==0))
    {
        f[l]='\0';
        printf("%s\n",f);
        printf("%d",p);
        count[p]=1;

        return 0;
    }
    else
    {
        if(s[i]=='?')
        {


            f[l]=k;
            printf("%d",p);
            p=p+1;

            //l++;

        }
        else
        {

            f[l]=s[i];
            //p=p+1;
            //count[p]=1;
            //l++;
        }
    }
    if(i<n)
    {


        return (rec(s,f,i+1,n,'a',l+1))||(rec(s,f,i+1,n,'b',l+1));

    }
}

int main()
{
    printf("Hello world!\n");
    char s[100]="0?1?";

    char f[10];
    f[100]='\0';
    rec(s,f,0,4,'a',0);
    return 0;
}
