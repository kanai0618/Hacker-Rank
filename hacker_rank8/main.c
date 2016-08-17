#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int n,  i, count,sum=0,j,temp;
    long int k;
    scanf("%d%ld", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &prices[i]);
    }


    long int answer = 0;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(prices[i]>prices[j])
            {
                temp=prices[i];
                prices[i]=prices[j];
                prices[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {

            sum+=prices[i];


            if(sum<=k)
            {
                answer++;
            }
        }
printf("%ld",answer);
    // Compute the answer


    return 0;
}



