#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */
int stringSimilarity(char a[])
{

    int sum=0,i,j,count=0,k=0,l=0;
    int n=strlen(a);
    char x[10000];




    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            x[k++]=a[j];
        }
        for(l=0; l<k; l++)
        {
            printf("%c",x[l]);
        }
        printf("\n");
        for(l=0; l<k-1; l++)
        {
            if(x[l]==a[l])
            {
                count++;
            }
        }


        sum+=count;
        count=0;
        k=0;
    }



    return (sum+n+1);



}

int main()
{
    int res, t, i;
    scanf("%d",&t);
    char a[100001];
    for (i=0; i<t; i++)
    {
        scanf("%s",a);
        res=stringSimilarity(a);
        printf("%d\n",res);
    }

    return 0;
}
