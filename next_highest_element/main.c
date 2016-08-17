#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a[10],n,i,k=0,m,min,max=99999,z,p,temp,j;
    scanf("%d",&n);


    while(n>0)
    {
        a[k++]=n%10;
        n=n/10;
    }
    m=k;
    while(a[k-2]>a[k-1])
    {
        k--;
    }
    min=a[k];
    p=k;

    for(i=k-1; i>=0; i--)
    {

        if((a[i]>min)&&(a[i]<max))
        {
            max=a[i];
            z=i;
        }
    }


    temp=a[k];
    a[k]=a[z];
    a[z]=temp;


    for(i=k-2; i>=0; i--)
    {
        for(j=k-1; j>=0; j--)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=m-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}
