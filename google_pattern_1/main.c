#include <stdio.h>
#include <stdlib.h>

int main()
{



    int m=2,j,count=0,a[100],b[100],k=0,temp,l;

    int t=1,n;



    printf("Enter the row\n");

    scanf("%d",&n);



    a[0]=1;
    a[1]=1;
    printf("1\n");
    printf("%d%d\n",a[0],a[1]);


    while(t<n)
    {
        j=0;
        while(j<m)
        {

            temp=a[j];
            while(a[j]==a[j+1]&&j<m)
            {

                count++;
                j++;
            }
            j++;
            printf("%d%d",count+1,temp);

            b[k++]=count+1;
            b[k++]=temp;
            count=0;
        }
        //printf("%d\n",j);
        for(l=0; l<k; l++)
        {
            a[l]=b[l];
        }
        printf("\n");
        m=k;
        k=0;
        t++;
    }s





    return 0;
}
