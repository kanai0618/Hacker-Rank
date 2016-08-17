#include <stdio.h>
#include <stdlib.h>



int check(char *s,char *s1,int x,int y)
{
    if((x==0)&&(y==0))
        return 1;
    if((x==0)&&y!=0)
        return 1;
    if((x!=0)&&(y==0))
        return 0;
    if(s[x]==s1[y])
        return check(s,s1,x-1,y-1);
    else
        return check(s,s1,x,y-1);
}

int main()
{
    printf("Hello world!\n");
    char s[10]="gksrek";
    char s1[10]="geeksforgeeks";
    printf("%d",check(s,s1,strlen(s)-1,strlen(s1)-1));
    return 0;
}
