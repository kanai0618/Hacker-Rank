

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
    int t,j,z=0;
    scanf("%d",&t);
    while(t--)
    {
        int size,i,max=1;
        scanf("%d",&size);
        int arr[size];
        for(i=0;i<size;i++)
            scanf("%d",&arr[i]);
            int head, count=0;
            quicksort(arr,0,size-1);
            for(i=0;i<size;i++)
            {
                if(arr[i]==arr[i+1])
                {
                    count++;
                }


            }
            if(count>max)
                {
                    max=count;
                }
            if((max+1)>size/2)
                {
                    head=arr[i];
                    z=count+1;
                    count=0;
                }
                count=0;

                //printf("\n%d",count);





             if( z>size/2)
            printf("YES %d\n", head);
              else
            printf("NO\n");
        printf("\n");
        count=0;
        z=0;
    }

    return 0;
}

