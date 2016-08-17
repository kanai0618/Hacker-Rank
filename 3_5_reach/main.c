#include <stdio.h>
#include <stdlib.h>


void reach(int n,int sum)
{
    if(sum>n)
        return ;
    if(sum==n)
    {

        printf("got ");
        return ;
    }
    reach(n,sum*3);
    reach(n,sum+5);


}

int main()
{
    printf("Hello world!\n");
    reach(16,1);
    return 0;
}
