#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x=100;int y=600;
    printf("%d",2*(x&y)+(x^y));
    return 0;
}
