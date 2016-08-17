#include <stdio.h>
#include <stdlib.h>
int sum=0;

int rec(int a,int b)
{
    if(b==0)
        return sum;
    else
    {
        sum=sum+a;
    }
    return rec(a,b-1);
}


int main()
{
    printf("Hello world!\n");
    printf("%d",rec(16,16));
    return 0;
}
