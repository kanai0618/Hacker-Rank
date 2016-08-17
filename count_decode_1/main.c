#include <stdio.h>
#include <stdlib.h>

int countdecode(char *digit,int n)
{
    int count[n+1];
    count[0]=1;
    count[1]=1;
    int i;
    for(i=2;i<=n;i++)
    {
        if(digit[i-1]>0)
            count[i]=count[i-1];
        if(((digit[i-1]<'6')&&digit[i-2]=='2')||(digit[i-2]<'2'))
            count[i]+=count[i-2];
    }
    return count[n];
}


int main()
{
    printf("Hello world!\n");
    char digit[10]="11111";
    printf("%d",countdecode(digit,5));
    return 0;
}
