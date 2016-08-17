#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char s[1000],s1[1000];
   int p[10000],n,flag[10000]={0},i,j,count=0,k=0;
    scanf("%d",&n);

    while(n>0)
    {
        scanf("%s",s);
        scanf("%s",s1);
        for(i=0;i<strlen(s);i++)
        {
            for(j=0;j<strlen(s1);j++)
            {
                if(s[i]==s1[j]&&flag[i]==0)
                {
                    count++;
                    flag[i]=1;
                }
            }
        }
         for(i=0;i<100;i++)
         {
             flag[i]=0;
         }
        p[k++]=count;
        n--;
        count=0;
    }
    for(i=0;i<k;i++)
        printf("%d\n",p[i]);
}
