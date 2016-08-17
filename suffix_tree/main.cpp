#include <iostream>
#include<string.h>
using namespace std;

void quicksort(int x[10],int first,int last){
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

    int n,x,y;int sum=0,sum1=0,count=0;
    int a[1000],b[1000];
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    quicksort(a,0,n-1);quicksort(b,0,n-1);
    for(int i=n-1;i>=0;i--)
    {
        if(count<x)
        {
            sum+=a[i];


            count++;
        }
    }
    count=0;
    for(int i=n-1;i>=0;i--)
    {
        if(count<y-1)
        {
            sum1+=b[i];
            count++;
        }
    }
    cout<<sum+sum1;

}
