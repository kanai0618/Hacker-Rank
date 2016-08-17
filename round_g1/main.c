#include<stdio.h>
#include<conio.h>
int main()
{
    int st[100],b[100],w[100],tat[100],n,tq;
    int i,count=0,wt=0,stat=0,temp,sq=0,flag=0;
    float awt=0,atat=0;

    printf("Enter the number of processes:");
    scanf("%d",&n);
    printf("Enter burst time for sequences:");
    for(i=0; i<n; i++)
    {
        printf("process%d \n",i+1);
        scanf("%d",&b[i]);
        st[i]=b[i];
    }
    printf("Enter time slice:");
    scanf("%d",&tq);
    while(flag!=1)
    {
        for(i=0,count=0; i<n; i++)
        {
            temp=tq;
            if(st[i]==0)
            {
                count++;
                continue;
            }
            if(st[i]>tq)
                st[i]=st[i]-tq;
            else if(st[i]>=0)
            {
                temp=st[i];
                st[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;
        }
        if(n==count)
            flag=1;
    }
    for(i=0; i<n; i++)
    {
        w[i]=tat[i]-b[i];
        wt=wt+w[i];
        stat=stat+tat[i];
    }
    awt=(float)wt/n;
    atat=(float)stat/n;

    printf("Avg wait time is %.1f\nAvg turn around time is %.1f",awt,atat);
    getch();
}
