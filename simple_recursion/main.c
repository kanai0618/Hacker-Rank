#include <stdio.h>
#include <stdlib.h>
int sum=0;
int k,count=1;
int prod=1;
int fun(int i,int count,int n,int prod,int sum)
{


        k=i;
        //printf("%d\n",sum);
        count=i;


        while(count>0)
        {
            prod=prod*k;
            k++;
            count--;
        }
        sum+=prod;
        prod=1;
        if(i==n)
        return sum;

      else
        return fun(i+1,count,n,prod,sum);
}

int main()
{
    printf("Hello world!\n");
    printf("%d\n",fun(1,1,5,1,0));
    return 0;
}
