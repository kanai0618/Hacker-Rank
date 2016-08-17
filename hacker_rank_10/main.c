#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n,a[10000],m,n1,min=9999,count=0,j,i;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

scanf("%d%d",&m,&n);


for(i=m;i<=n;i++)
{
    for(j=0;j<n1;j++)
    {
        if(abs(a[j]-i)<min&&abs(a[j]-i)>0)
        {
            min=abs(a[j]-i);


        }

    }
}
printf("%d",min);

for(i=m;i<=n;i++)
{
    for(j=0;j<n1;j++)
    {
        if(abs(a[j]-i)==min)
        {
            count++;


        }

    }
}
printf("%d",count);
}
