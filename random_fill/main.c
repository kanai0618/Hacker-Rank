#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{



    int x,count=0,i=0;
    double z=0,k=2;



    printf("Enter the number \n");
    scanf("%d",&x);



    while(x>0)
    {
        if((x&1)!=1)
        {
            z+=pow(k,i);


        }
        i=i+1;

        x=x>>1;
    }
    printf("After changing\n");
    printf("%.lf",z);


    return 0;
}
