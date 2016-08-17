#include <stdio.h>
#include <stdlib.h>


void fun(int n)
{
    int count=0;
    int k=0;



   while(k<4)
   {
       if(n&1<<k)
       {
           n=n^(1<<k);
           printf("%d",n);
           break;
       }


       k++;
   }








}


int main()
{
    printf("Hello world!\n");



    int i=2,res[100],j,k=0;
    int  n=36;
    fun(10);
           return 0;
}
