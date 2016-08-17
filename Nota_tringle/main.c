#include <stdio.h>
#include <stdlib.h>

void quicksort(long long int x[2000],int first,int last){
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
    long long int  x,n,m,k,l,a[2000][2],o,i;

    scanf("%lld",&n);

    while(n>0)
    {
        scanf("%lld%lld",&m,&o);
        for(i=0;i<o;i++)
        {
            scanf("%lld%lld",&k,&l);
            a[i][0]=l;
            a[i][1]=k;
        }
        for(i=0;i<o;i++)
        {
            printf("%lld\t",a[i][0]);
        }
        quicksort(a,0,o-1);
        for(i=0;i<o;i++)
        {
            printf("%lld\t",a[i][0]);
        }
        n--;

    }








}
