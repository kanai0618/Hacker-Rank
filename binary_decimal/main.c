#include <stdio.h>
#include <stdlib.h>

void binary(int x)
{
    if(x==0)
    return ;
    binary(x/2);
    printf("%d",x%2);
}

int main()
{
    printf("Hello world!\n");
    binary(100);
    return 0;
}
