#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x=15,count=0;
    while(x>0)
    {
        if((x&1)==1)
        {
            printf("%d\n",count);break;
        }
        count++;
        x=x>>1;
    }
    return 0;
}
