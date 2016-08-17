#include <stdio.h>
#include <stdlib.h>

int min(int x,int y,int z,int p)
{
   if((x>y)&&(y>z)&&(z>p))
   return p;
   if((y>x)&&(z>x)&&(p>x))
   return x;

   if((z>y)&&(p>y)&&(x>y))
   return p;
   if((p>z)&&(y>z)&&(x>z))
   return z;



}



int sum(int sum1)
{

    if((sum1==2)||(sum1==3)||(sum1==5)||(sum1==7))
        return 1;

    if(sum1<=0)
        return 0;


   else
    return min(1+sum(sum1-7),1+sum(sum1-5),1+sum(sum1-3),1+sum(sum1-2));

}

int main()
{
    printf("Hello world!\n");
    printf("%d",sum(14));
    return 0;
}
