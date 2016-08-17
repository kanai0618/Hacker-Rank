#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Hello world!\n");
    int n,m,x=0,count=0,a[10000],temp,i,j,o=0,h;
    float p[1000];
    float z,l,k;
    char c;
    scanf("%d",&n);

    while(n>0)
    {
        scanf("%c%d",&c,&m);
        int flag=0;
        if(c=='r')
        {
            for(i=0; i<x; i++)
            {
                if(a[i]!=m)
                {
                    count++;
                }
            }


            for(i=0; i<x&&flag!=1; i++)
            {
                if(a[i]==m)
                {
                    if(i!=(x-1))
                    {


                        for(j=i; j<x; j++)
                        {
                            a[j]=a[j+1];
                        }
                        x--;
                    }
                    else
                    {
                        x--;
                    }

                    flag=1;
                }
            }

            if(x==0)
            {
                //printf("Wrong!");
                p[o++]=0;
            }

            if(count!=x&&x>1)
            {
                for(i=0; i<x-1; i++)
                {
                    for(j=i+1; j<x; j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }


                if((x%2)!=0)
                {

                    z=a[x/2];

                    p[o++]=z;
                    printf("\n");
                }
                else
                {
                    z=(a[(x/2)]+a[(x/2)-1]);



                    p[o++]=z/2.0;
                    printf("\n");
                }
            }

            if(x==1)
            {
                p[o++]=a[x-1];
            }


            n--;
        }
        if(c=='a')
        {
            a[x++]=m;
            if(x>=2)
            {


                for(i=0; i<x-1; i++)
                {
                    for(j=i+1; j<x; j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
            }

            if((x%2)!=0)
            {
                z=a[x/2];
                p[o++]=z;
                printf("\n");
            }
            else
            {
                z=(a[(x/2)]+a[(x/2)-1]);



               p[o++]= z/2.0;
                printf("\n");
            }
            n--;
        }

        count=0;
        flag=0;
    }
for(i=0;i<o;i++)
{
    if(p[i]==0)
    {
        printf("Wrong!");
        printf("\n");
    }
    else
    { k=p[i];
        h=(int)k;
      l=p[i]-h;
      if(l==0)
      {
          printf("%d",h);
          printf("\n");
      }
      else
      {


        printf("%.1f",p[i]);
        printf("\n");
      }
    }
}
    return 0;
}
