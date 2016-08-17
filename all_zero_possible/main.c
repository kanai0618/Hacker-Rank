#include <stdio.h>
#include <stdlib.h>

void zero(int *a,int index,int n,int *s,int sum1,int sum2,int i)
{

    if(i>n)
        return ;
    //printf("%d%d\n",sum1,sum2);

    if(sum1+sum2==0)
    {
        int k;
        for(k=0;k<index;k++)
        {
            printf("%d",s[k]);
        }
        printf("\n");
        return ;
    }
    s[index]=a[i];
    //s[index+1]='+';
    sum1+=a[i];

    zero(a,index+1,n,s,sum1,sum2,i+1);
    s[index]=a[i];
    //s[index+1]='-';
    sum1-=a[i];
    sum2-=a[i];
    zero(a,index+1,n,s,sum1,sum2,i+1);

}

int main()
{
    printf("Hello world!\n");
    int s[100],a[10]={1,2,3,4,5,6,7};
    s[0]=1;
    zero(a,1,7,s,1,0,a[0]);
    return 0;
}
