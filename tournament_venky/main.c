#include <stdio.h>
#include <stdlib.h>




int main()
{
    printf("Hello world!\n");



    int a[10],i=0,n,k=0,c[10],m=0,l;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=i;

    }
   i=0;
    while(n!=1)
    {
         while(i<n)
        {

            printf("%d",i);
            if(a[i]<a[i+1])
            {
                a[k++]=a[i+1];

                //printf("%d,%d\t%d\n",c[i],c[i+1],a[k]);
                c[k++]=i+1;
            }
            else
            {
                a[k++]=a[i];

                //printf("%d,%d\t%d\n",c[i],c[i+1],a[k]);
                c[k++]=i;
            }
            i=i+2;


        }
        for(l=0;l<k;l++)
        {
            printf("%d",a[l]);
        }printf("\n");


         k=0;
         i=0;
        n=n/2;


    }
    printf("Highest value :%d",a[0]);

    return 0;
}
