#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[10]={1,1,2,2,2,2,3,3,4},i,k=0,count=0;


    for(i=0;i<9;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            a[k++]=a[i];
            a[k++]=count+1;
            count=0;
        }
    }

    for(i=0;i<k;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
