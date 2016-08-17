#include<stdio.h>

int fib(int x)
{
int fact=1,i;
if(x==0)
    return 1;

for(i=1;i<=x;i++)
{fact=fact*i;
}
return fact;

}

int main()
{

int n,m,k=0,z[100],i;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&m);
z[k++]=fib(m);
n--;

}
for(i=0;i<k;i++)
{
printf("%d\n",z[i]);

}
}




