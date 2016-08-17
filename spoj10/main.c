#include<stdio.h>

void quicksort(int x[10000],int first,int last){
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
    int m,n,a[10000],b[10000],i;
    scanf("%d%d",&m,&n);

    while((m!=0)&&(n!=0))
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        quicksort(a,0,m-1);
        quicksort(b,0,n-1);
        if(a[0]<b[1])
        {
            printf("Y");

        }
        else
        {
            printf("N");
        }
        printf("\n");
        scanf("%d%d",&m,&n);
    }
}
