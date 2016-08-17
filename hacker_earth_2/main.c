#include <stdio.h>
#include <stdlib.h>

int angle(int x,int y)
{

    int count=0,flag=0,z=0;

    while(flag!=1)

    {
        if(z>999999)
        {
            return 0;
            flag=1;
        }


        if(count==y)
        {
            return 1;
            flag=1;

        }
        else
        {
            count+=x;
            z++;
            if(count>=360)
            {
                count=count-360;
            }
        }
    }



}

int main()
{

    int m,k,a[1000],p,flag=1,z,i;
    scanf("%d%d",&m,&k);

    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    while(k>0)
    {
        scanf("%d",&p);
        for(i=0; i<m; i++)
        {
            z=angle(a[i],p);
            if((z==1)&&(flag!=0))
            {
                printf("YES");
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("NO");
        }
        printf("\n");
        flag=1;
        k--;
    }


    return 0;
}
