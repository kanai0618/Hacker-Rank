#include <stdio.h>
#include <stdlib.h>
int swap(int *a,int *b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{



    int a[100]= {-1,2,-3,4,5,6,-7,8,9,-2},n=10,i=0,k;




    while(i<n)
    {

        if((a[i]>0)&&(a[i+1]<0))
        {
            i=i+2;
        }
        if((a[i]<0)&&(a[i+1]>0))
        {
            swap(&a[i],&a[i+1]);
        }
        else
        {
            if(a[i]>0)
            {
                k=i;
                while(a[i]>0)
                {
                    i++;
                }
                swap(&a[k+1],&a[i]);
            }
            else
            {
                k=i;
                while(a[i]<0)
                {
                    i++;
                }
                swap(&a[k+1],&a[i]);
            }
        }

    }
    for(i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }


    return 0;
}
