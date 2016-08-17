#include<stdio.h>


int sort(long data[],unsigned int k)
{
   long i,j,count=0;
   long min=999999,max=-999999;




    for(i=0;i<k;i++)
    {
         if(data[i]>max)
         {
             max=data[i];
         }

    }
    for(i=0;i<k;i++)
    {
         if(data[i]<min)
         {
             min=data[i];
         }

    }
    if(min==data[0]&&max==data[k-1])
    {
        return 1;
    }
    return 0;


}
int main()
{

    long long i,j,s,temp,count=0,k=0,n,z,flag=0,p,*a,*data;



    scanf("%ld",&n);
    a=(long*)malloc(n*sizeof(long));
    data=(long*)malloc(n*sizeof(long));

    for(i=0; i<n; i++)
        scanf("%ld",a+i);


    for(i=0; i<n-1; i++)
    {   data[k++]=a[i];
        for(j=i+1;j<n;j++)
        {
            data[k++]=a[j];
            if(sort(data,k))
            {
                count++;
            }
        }
        k=0;
    }k=0;

printf("%ld",count+n);


    return 0;
}
