#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int n=705,z;
    while(n>0)
    {
        z=n%26;
        if(z==0)
        {
            printf("z");
            n=(n/26)-1;
        }
        else
        {
            printf("%c",'a'+z-1);
            n=n/26;
        }
    }
    return 0;
}
