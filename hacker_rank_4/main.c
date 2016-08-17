#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

int candies[MAX];

/** The code to read from STDIN and output to STDOUT has been provided by us, for convenience. You may or may not use this. **/

int main() {

    int N,K;
    int i,j;
    int temp;
    long int min=9999999;


    scanf("%d",&N);
    for(i = 0;i < N;i++)
        scanf("%d",candies + i);

    int unfairness;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
           if(abs(candies[j]-candies[i])<=min)
           {
               min=candies[j]-candies[i];
           }
        }
    }
    printf("%ld",min);
     // Compute the min unfairness over here, using N,K,candies


    return 0;
}
