#include<stdio.h>


int main()
{

    long long sum=0;
    int k,i,n,a;
    scanf("%d",&n);


    while(n>0)
    {
    scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&a);
sum=(sum+a);



        }


        if((sum%k)==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
        sum=0;
        n--;

    }

    return 0;
}



