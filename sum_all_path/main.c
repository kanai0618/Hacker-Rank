#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],i,j,count=0,k=0,n,z,p=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[k++]=i;
        }

    }
    if((k==1)||(k==0))
    {
        for(i=b[0];i<n;i++)
        {
            p++;
        }
        count=count+(p/2)+1;
    }
    else
    {




    for(i=0;i<k-1;i++)
    {
        if((b[i+1]-b[i])>2)
        {
            //printf("%d",b[i]);
            z=(b[i+1]-b[i])/2;

            count=count+z;
        }
    }
    }
    printf("%d",count);

}
