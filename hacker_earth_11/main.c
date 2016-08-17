#include <stdio.h>
#include <stdlib.h>




int main()
{
    int s[10000],r[10000],m,n,i,count=0,max=-99999,p,h[1000]={0},count2=0;


    scanf("%d",&n);



    while(n>0)
    {
        scanf("%d",&m);

        for(i=0; i<m; i++)
        {
            scanf("%d%d",&s[i],&r[i]);




        }
        for(i=0; i<m; i++)
        {


            if(r[i]==1)
            {
                h[s[i]]++;
            }


        }


        for(i=0; i<m; i++)
        {
            while(r[i]==1)
            {
                count++;
                i++;
            }
            if(count>max)
            {
                max=count;
                p=i;
                count=0;
            }
            count=0;
        }


        while(max>=0)
        {


                h[s[p-1]]++;

                if(((h[s[p-1]]==2)||(h[s[p-1]]==3)))
                {

                    count2++;
                }




            p--;
            max--;
        }
        printf("%d\n",count2);
        count2=0;

        for(i=0;i<1000;i++)
        {
            h[i]=0;
        }


        count=0;
        max=-99999;
        p=0;

        n--;

    }



    return 0;
}
