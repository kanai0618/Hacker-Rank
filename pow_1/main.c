#include <stdio.h>
#include <stdlib.h>


int pow(int x,int y)
{
    if(y==1)
        return x;
    if((y%2)==0)
        return pow(x,y/2)*pow(x,y/2);
    else
        return pow(x,y/2)*pow(x,y/2)*2;
}
int main()
{
    printf("Hello world!\n");
    printf("%d",pow(2,9));
    return 0;
}
