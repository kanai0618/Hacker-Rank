659879/#include <stdio.h>
#include <stdlib.h>


// 1=1 2=1*1 3=1*2 4=2*2 5=2*3

int rec(int x)
{
    if(x==1)
        return 1;
        if(x==2)
            return 2;
            if(x==3)
                return 3;

    else
        return rec(x/2)*rec(x-x/2);
}


int main()
{
    printf("Hello world!\n");
    printf("%d",rec(3));
    return 0;
}
