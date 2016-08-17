#include <stdio.h>
#include <stdlib.h>


int sum(int x,int p)
{

     if(x==0) return 0;
     if(x>=1)
     {
         return (x%10)*p+sum(x/10,p/10);
     }


}

int main()
{
    printf("hello world!\n");


    printf("%d\n",sum(1924,1000));
    return 0;
}
