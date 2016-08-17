#include <stdio.h>
#include <math.h>

void quicksort(long int x[10],int first,int last){
    int pivot,j,temp,i;

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
    long n,a[100000],i;int count=0,sum=0,m;
    scanf("%ld",&n);
    scanf("%ld",&m);

    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);

    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<=m)
        {
            count++;
        }
    }
    printf("%d",count);
}
