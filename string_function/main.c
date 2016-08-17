#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    printf("Hello world!\n");
    char s[100]="hello world";
    char s1[10]="hello";

    printf("%d",strstr(s,s1));
    return 0;
}
