#include<stdio.h>

int main()
{
    int x=17,count=0;


    while(x>0)
    {
        x=x>>1;
        count++;
    }

    printf("%d",1<<count);
}
