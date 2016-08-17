#include <stdio.h>
#include <stdlib.h>


void print(int *a,int i,int o,int z,int n,int *r)
{
    if(i>n)
        return ;
    if((i==n)&&(o>=z))
    {  int l;
        for(l=0;l<n;l++)
        {
            printf("%d",r[l]);
        }
        printf("\n");
        return ;
    }
    r[i]=1;
    print(a,i+1,o+1,z,n,r);
    r[i]=0;
    print(a,i+1,o,z+1,n,r);


}

int main()
{
    printf("Hello world!\n");
    int a[10],r[10];
    print(a,0,0,0,3,r);
    return 0;
}
