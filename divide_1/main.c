#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int s[100000],n,a,b;

    scanf("%d%d%d",&a,&b,&n);
    s[0]=a;s[1]=b;int t=2;

    while(t<n)
    {
       s[t]=s[t-1]*s[t-1]+s[t-2];
       t++;
    }
    printf("%d",s[t-1]);

}
