#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int a[10]={10, 3, 5, 6, 2},temp=1,i,prod[10];


    for(i=0;i<5;i++)
    {
        temp=temp*a[i];
        prod[i]=temp;
    }
    temp=1;
    prod[4]=prod[4]/a[4];
    for(i=3;i>=0;i--)
    {
        temp=temp*a[i+1];
        prod[i]=(prod[i]/a[i])*temp;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",prod[i]);
    }
    return 0;
}
