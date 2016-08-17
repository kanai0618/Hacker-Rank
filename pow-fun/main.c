#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3,y=5,res=1;


    while(y>0)
    {
        if(y%2==0)
        {
            y=y/2;
            x=x*x;

        }
        else
        {
            y--;
            res=res*x;

        }


    }
    printf("%d",res);
    return 0;
}
