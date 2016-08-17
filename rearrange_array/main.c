#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("Hello world!\n");



    int a[10],p,k,i;

    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<9;)
    {
        if((i%2)==0)
        {
            if(a[i]<0)
            {
                if(i==8)
                {
                    break;
                }
                else
                {


                k=i+1;
                while(a[k]<0)
                {
                    k=k+1;
                }
                swap(&a[i],&a[k]);
                i=i+2;
                }
            }
            else
            {
                //printf("hi");
                i=i+1;
            }

        }
        if((i%2)!=0)
        {
            if(a[i]>0)
            {
                if(i==8)
                {
                    break;
                }
                else
                {


                k=i+1;
                while(a[k]>0)
                {
                    k=k+1;
                }
                swap(&a[i],&a[k]);

                i=i+2;
                }
            }
            else
            {
                i=i+1;
            }

        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d\t",a[i]);
    }


    return 0;
}
