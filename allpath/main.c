#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1,n,k=1,m=0,flag=1,p=1,l=0;
    scanf("%d",&n);


    while(flag)
    {

        if(k>n)
        {
            flag=0;
        }
        else
        {



            for(i=k; i<=n; i++)
            {


                printf("%d\t",i);
                i=i+m+l;


                m=m+1;

            }
            printf("\n");

            //printf("lvalue%d",l);

            p=p+1;


        }
        k=k+p;
        //printf("k value%d",k);
        l=l+1;
        m=0;



    }


}
