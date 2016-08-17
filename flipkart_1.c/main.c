#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[4][4],s=0,sum[10],k=0,l,j,i,maximum=0,max[5]={0},count=0,m,true=1,n,p;

printf("Enter the row in the matrix");
scanf("%d",&n);


printf("Enter the column in the matrix");
scanf("%d",&p);

for(i=0;i<n;i++)
{
    for(j=0;j<p;j++)
    {
        scanf("%d",&a[i][j]);
    }
}




while(true)
{


for(i=0;i<n;i++)
{
    for(j=0;j<p;j++)
    {
        if(a[i][j]==0)
        {
            count++;
        }
    }
}
if(count==(n*p))

{  printf("sum:-");
    printf("%d",s);
true=0;

}
else
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            if(a[i][j]>max[i])
            {
                max[i]=a[i][j];
                l=i;
                m=j;
            }

        }
        sum[k++]=max[i];
        a[l][m]=0;
        max[i]=0;


    }
    printf("\n");
    for(i=0;i<k;i++)
{
    if(sum[i]>maximum)
    {
        maximum=sum[i];
    }

}
//printf("%d",maximum);
s+=maximum;
maximum=0;


}
k=0;
count=0;

}


return 0;
}
