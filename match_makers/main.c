#include <stdio.h>
#include <stdlib.h>

void quicksort(long long int x[10000],long long int first,long long int last){
    long long int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

int main()
{
    int n;
    long long int a[10000],b[10000],count=0,j,i,t;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%lld",&t);
        for(i=0;i<t;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<t;i++)
        {
            scanf("%lld",&b[i]);
        }
        quicksort(a,0,t-1);
        quicksort(b,0,t-1);

        for(i=0,j=t-1;i<t&&j>=0;i++,j--)
        {
            if((a[i]%b[j]==0)||(b[j]%a[i]==0))
            {
                count++;
            }
        }
        printf("%lld",count);
        count=0;
        printf("\n");
        n--;
    }
    return 0;
}
