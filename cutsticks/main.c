#include <stdio.h>
#include <stdlib.h>
void quicksort(int x[1000],int first,int last){
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
int n,a[1000],i,k,flag=1,count=0,min,p=0;



    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    quicksort(a,0,n-1);

    printf("%d\n",n);
    k=0;


    while(p<=n)
    {
min=a[k];

        for(i=k;i<n;i++)
        {

            a[i]=a[i]-min;
            if(a[i]==0)
            {
                count++;
            }

        }
        /*for(i=k;i<n;i++)
        {
            printf("%d",a[i]);

        }
        printf("\n");*/


        //printf("%d\n",count);
        if((n-count)>0)
         {printf("%d\n",n-count);
         }



        k=count;
        p++;
    }
    return 0;
}
