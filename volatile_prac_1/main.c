#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int const p=1;
    {
       const p=2;
       printf("%d",p);
       p=3;

    }
    //p=3;
    printf("%d",p);

}
