#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[10]= {5,3,4,1,2},i,j,k,temp;


    for(i=1; i<5; i++)
    {

        j=0;
        while(a[j]>a[i]&&j<i)
        {
            j++;
        }



        if(j!=i)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }



    }
    for(i=0; i<5; i++)
    {
        printf("%d",a[i]);

    }

    return 0;
}
