#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[100],b[100],count=0,count1=0,r,flag=0,n,i,t[100],l[100]= {0},k=0;
    int wait=0;


    printf("Round Robin\n");

    printf("Enter the number of process\n");
    scanf("%d",&n);
    printf("Enter the arrival time\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Burst  time\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter the time slice\n");
    scanf("%d",&r);





    while(flag!=1)
    {

        for(i=0; i<n; i++)
        {
            if(b[i]==0)
            {
                count++;
            }
        }
        if(count==n)
        {
            flag=1;
        }

        else
        {
            for(i=0; i<n; i++)
            {
                if(b[i]>r)
                {
                    printf("p: %d slice %d\n",i+1,r);
                    wait=wait+(k-l[i]);
                    l[i]=l[i]+k;


                    k=k+r;

                    printf("%d k %d wait\t",k,wait);

                    t[i]=b[i]-r;
                }
                else
                {
                    if((b[i]!=0)&&(b[i]>0))
                    {
                        printf("p: %d slice %d\n ",i+1,b[i]);


                        wait=wait+(k-l[i]);
                        l[i]=l[i]+k;


                        k=k+b[i];

                        printf("%d k %d wait\t",k,wait);




                        t[i]=0;
                    }
                }
            }

        }
        for(i=0; i<n; i++)
        {
            b[i]=t[i];
        }
        count=0;




    }
    printf("%d",wait);







    return 0;
}
