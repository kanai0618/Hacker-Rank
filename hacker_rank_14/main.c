#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */

int main()
{

   char x[10000],s[10000],s1[10000];
   int n,j,i,k=0,count=0;
    scanf("%d",&n);

    while(n>0)
    {
        gets(s);
        gets(s1);
        for(i=0;i<strlen(s);i++)
        {
            for(j=i;j<strlen(s1)+i;j++)
            {
                x[k++]=s[j];
            }
            for(l=0;l<k;l++)
            {
                if(x[l]!=s1[l])
                {
                    count++;
                }
            }
            if(count<=1)
            {
                printf("%d%d",i,i+strlen(s1));
            }
        }
        n--;
        k=0;
        count=0;

    }
}
