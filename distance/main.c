#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a[10]={1,2,3,4,5,2,5};
    int i,m=2,n=5,dis,min=999,flag,flag1,pos,pos1;


    for(i=0;i<7;i++)
    {

        if(a[i]==m)
        {
            pos=i;
            flag=1;
        }
        if(a[i]==n)
        {
            pos1=i;
            flag1=1;
        }
        if(flag&&flag1)
        {
            dis=pos1-pos;
            if(dis<min)
            {
                min=dis;
            }
        }
    }
    printf("%d",dis);

    return 0;
}
