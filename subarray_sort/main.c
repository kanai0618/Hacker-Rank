#include <stdio.h>
#include <stdlib.h>
int sort(int a[],int i,int j)
{
    int k,count=0;
    for(k=i;k<j-1;k++)
    {
        if(a[k]<a[k+1])
        {
            count++;
        }
    }
    printf("count%d\n",count);
    printf("%di%dj",i,j);
    if(count==j-i-2)
    {
        return 1;
    }
    return 0;

}
int main()
{
    printf("Hello world!\n");

    int a[100],flag=1,flag1=1,i,k,pos,pos1,j,flag2=1;

    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1]&&flag2)
        {
            pos=i;
            flag2=0;
            k=pos+1;
            //printf("%d",pos);
            while(flag!=0)
            {

                printf("%d",k);
                for(j=k;j<n;j++)
                {
                    if(a[j+1]>a[j]&&flag1)
                    {
                        pos1=j+1;
                        flag1=0;
                    }
                }
                if(sort(a,pos1,n-1))
                {
                    printf("%d",pos1-pos);
                    printf("%d",pos);
                    printf("%d",pos1);
                    flag=0;
                    break;
                }
                else
                {
                    k=pos1;
                    flag1=1;
                }

            }
        }
    }


    return 0;
}
