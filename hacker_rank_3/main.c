#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[100],min,count=0,count1=0,n,flag=0;
    int x=-1;
scanf("%d",&n);


for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];


while(flag!=1)
{
       for(i=0;i<n;i++)
        {
            if(a[i]!=x)
            {
                count1++;
            }
        }
        printf("%d",count1);
        count1=0;

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    if(count==n)
    {
        flag=1;
        break;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<min&&a[i]!=x)
            {
                min=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>min)
            {
                a[i]=a[i]-min;
            }
            if(a[i]==min)
            {
                a[i]=x;
            }
        }

        min=a[0];
        count=0;
        //flag=1;
    }
}


    return 0;
}
