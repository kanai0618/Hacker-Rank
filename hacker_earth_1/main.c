#include <stdio.h>

int main()
{


    int n,k,i;
    scanf("%d",&n);
    while(n>0)
    {
    	scanf("%d",&k);
    	for(i=1;i<=k;i++)
    	{
    		if((i%3)==0)
    		{
    			printf("Fizz");
    			printf("\n");
    		}
    		if((i%5)==0)
    		{
    			printf("Buzz");
    			printf("\n");
    			if(((i%3)==0)&&((i%5)==0))
    		{
    			printf("FizzBuzz");
    			printf("\n");
    		}
    		}

    		if(((i%3)!=0)&&((i%5)!=0)&&(((i%5)!=0))&&((i%3)!=0))

    		{
    			printf("%d",i);
    			printf("\n");
    		}
    	}
    	n--;
    }

    return 0;
}
