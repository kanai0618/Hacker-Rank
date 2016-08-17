#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    //int n=2;
    int n=32;int count=0;
    while(n>1)
    {
        n=n>>1;

        count++;
    }
    printf("%d",n);

    if((count%2)==0)
    {
        printf("Power of 4");
    }
    else
    {
        printf("Not a power of 4");
    }
    return 0;
}
