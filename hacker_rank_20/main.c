#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int palin(char s[])
{
    int i,j,n,flag=0,count=0,k=0;
    n=strlen(s);

    for(i=0,j=n-1;i<n/2&&j>=n/2&&flag!=1;i++,j--)
    {
        if(s[i]==s[j])
        {
            count++;
        }

    }

    if(count==n/2)
    {
        return -1;flag=1;

        //break;
    }
n=n-1;
    while(flag!=1)
    {

    if(n-1==0)
    {
        return 0;
        flag=1;
        break;

    }


    for(i=k,j=n-1;i<n/2&&j>=n/2;i++,j--)
    {
        if(s[i]==s[j])
        {
            count++;
        }

    }

    if(count==n/2)
    {
        return k;
        flag=1;
        break;
    }
    k++;
    count=0;

    }

}


int main()
{
    printf("Hello world!\n");
    int n,k=0,x[100],i;
    char s[10000];

    scanf("%d",&n);


    while(n>0)
    {
        scanf("%s",s);
        x[k++]=palin(s);
        n--;



    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
