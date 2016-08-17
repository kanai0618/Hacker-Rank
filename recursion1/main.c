#include <stdio.h>
#include <stdlib.h>

int rec(char*s)
{
    if(*s!=NULL)
    {
        return 1+rec(s+1);
    }
}

int main()
{
    printf("Hello world!\n");
    char s[100];
    gets(s);
    printf("%d",rec(s));
    return 0;
}
