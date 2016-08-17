#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if(x>y)return y;
    else
        return x;
}


struct merge
{
    int x;
    int y;
};
void mergeoverlap(struct merge a[])
{
    int i,j,temp;
    for(i=0; i<5; i++)
    {
        if((a[i].x<a[i+1].x)&&(a[i].y<a[i+1].y)&&(a[i].y>a[i+1].x)&&(a[i].x<a[i+1].y))
        {
            printf("%d%d",max(a[i].x,a[i+1].x),max(a[i].x,a[i+1].y));
        }
    }
}

int main()
{
    printf("Hello world!\n");
    struct merge a[10],b[10];
    int n,i,n1;
    for(i=0; i<4; i++)
    {
        scanf("%d",&n);
        scanf("%d",&n1);
        a[i].x=n;
        a[i].y=n1;
    }

    mergeoverlap(a);
    return 0;
}
