#include<stdio.h>
int main()
{
  int i,j,n,time,rem,flag=0,ts;
  int sum_w=0,sum_t=0,a[10],b[10],rt[10];
  printf("Enter the number of processes  ");
  scanf("%d",&n);
  rem=n;
  for(i=0;i<n;i++)
  {
    printf("Enter the  arrival time and burst time for Process P%d :",i+1);
    scanf("%d",&a[i]);
    scanf("%d",&b[i]);
    rt[i]=b[i];
  }
  printf("Enter time quantum :");
  scanf("%d",&ts);
  printf("\n\nProcess\t  waiting time\n\n");
  for(time=0,i<;rem!=0;)
  {
    if(rt[i]<=ts && rt[i]>0)
    {
      time+=rt[i];
      rt[i]=0;
      flag=1;
    }
    else if(rt[i]>0)
    {
      rt[i]-=ts;
      time+=ts;
    }
    if(rt[i]==0 && flag==1)
    {
      rem--;
      printf("P %d\t\t%d\t\t%d\n",i+1,time-a[i],time-a[i]-b[i]);
      sum_w+=time-a[i]-b[i];
      sum_t+=time-a[i];
      flag=0;
    }
    if(i==n-1)
      i=0;
    else if(a[i+1]<=time)
      i++;
    else
      i=0;
  }
  printf("\nAverage waiting time = %.1f\n",sum_w*1.0/n);

  return 0;
}
