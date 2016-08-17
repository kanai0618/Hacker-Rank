#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n=27,k;

    while(n>0)
    {
        k=n%26;
        printf("%c",'A'+k-1);
        n=n/26;
    }
    return 0;
}
