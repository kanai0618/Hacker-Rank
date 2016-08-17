#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int x=100,sum=0,num,k=0;


    while(x>0)
    {
        num=x%2;
        sum=sum+k*num;
        x=x/2;
        k=k+10;
    }
    printf("%d",sum);
    return 0;
}
