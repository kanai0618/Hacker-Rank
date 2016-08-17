#include<stdio.h>


int main()
{

    int a[10]={1,101,2,3,100,4,5},temp,j,i,sum=0,max1=-9999,max=-9999;





    for(i=0;i<7;i++)
    {
        max=a[i];
        sum+=a[i];
        for(j=i+1;j<7;j++)
        {
            if(a[j]>max)
            {
                sum+=a[j];
                max=a[j];
            }
        }
        if(sum>max1)
        {
            max1=sum;
            //sum=0;
        }
        sum=0;
    }
    printf("%d",max1);




}
