#include <stdio.h>
#include <stdlib.h>

int main()
{

    int min,i,a[1000],n,flag=1,count=0,count1=0,x=-1;



    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
  while(flag!=0)
  {


      for(i=0;i<n;i++)
      {
          if(a[i]!=x)
          {
              count1++;
          }
      }
      printf("%d\n",count1);
count1=0;
  for(i=0;i<n;i++)
  {
      if(a[i]==x)
      {
          count++;
      }
  }
  if(count==n-1)
  {
      flag=0;
  }
  else
  {



    min=100000;
    for(i=0;i<n;i++)
    {
        if((a[i]<min)&&(a[i]!=x))
        {
            min=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>min&&a[i]!=x)
        {
            a[i]=a[i]-min;
        }
        else
        {
            a[i]=x;
        }

    }



  }
  count=0;
  //min=100000;


  }
    return 0;
}
