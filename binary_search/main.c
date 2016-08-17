#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,4},k=0,i,j,p=1;


    while(p<=4)

    {
        while(k<=3)
        {


        for(j=k;(j<k+p)&&(k+p<=4); j++)
        {
            printf("%d\t",a[j]);
            //k++;
        }
        printf("\n");

        k++;
        }
        k=0;
        p++;
    }




}
