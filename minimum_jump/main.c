#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i=0;
    char s[10];
    int ans=0;
    scanf("%s",s);

    for(i=0;i<strlen(s);i++)
    {
        ans=ans*10+s[i]-'0';

    }
    printf("%d",ans);
    return 0;
}
