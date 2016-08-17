#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int a[10]={1,5,3,8,0,2,3},max=-99999,l,k,sum1=0,sum2=0,i,n=7;




    for(i=0;i<n;i++)
    {
        k=i;
        l=i+1;
        while(k>=0&&l<=2*(i)+1)
        {
            sum1+=a[k];
            sum2+=a[l];
            printf("%d\t%d\n",sum1,sum2);
            if(sum1==sum2)
            {
                if((l-k)>max)
                {
                    max=l-k;



                }
            }
            k--;
            l++;
        }
        sum1=0;
        sum2=0;

    }
    printf("%d",max+1);





    return 0;
}
