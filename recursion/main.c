#include <stdio.h>
#include <stdlib.h>
int sum=0;
int min2(int x,int y)
{
    if(x>y)
        return y;
    else
        return x;
}
int min(int x,int y,int z)
{
    if(x>min2(y,z))
        return min2(y,z);
    else
        return x;
}

int min1(int x)
{
    if(x<=1)
        return 0;
    else
         sum+=1+min(min1(x-25),min1(x-50),min1(x-75));
         return sum;
}

int main()
{
    printf("Hello world!\n");
    printf("%d",1+min1(100));
    return 0;
}
