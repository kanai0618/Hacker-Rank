#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a[10]={7,8,3,1,5,9,8,2},i,min1,min2;
    min1=a[0];
    min2=a[1];
    for(i=2;i<8;i++)
    {
        //printf("%d\t%d\n",min2,a[i]);
        if(a[i]<min2)
        {
            if(a[i]<min1)
            {
                min2=min1;
                min1=a[i];
            }
            else
            {
                min2=a[i];
            }
        }
    }
    printf("%d\t%d",min1,min2);
    return 0;
}
