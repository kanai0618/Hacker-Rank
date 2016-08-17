#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */
void stringReduction(char a[]) {

    int flag=0,k=0,i,count=0,l;
    char s[10000];
    int n=strlen(a);

    while(flag!=1)
    {
        for(i=0;i<n;)
        {
            if((a[i]=='a'&&a[i+1]=='b')||(a[i]=='b'&&a[i+1]=='a'))
            {
                s[k++]='c';
                i=i+2;
                //continue;
            }
            if((a[i]=='a'&&a[i+1]=='c')||(a[i]=='c'&&a[i+1]=='a'))
            {
                s[k++]='b';
                i=i+2;
                //continue;
            }
            if((a[i]=='b'&&a[i+1]=='c')||(a[i]=='c'&&a[i+1]=='a'))
            {
                s[k++]='a';
                i=i+2;
                //continue;
            }
            else
            {
                s[k++]=s[i];
                i=i+1;
            }
        }





        if(count==strlen(a)-1)
        {
            printf("%d",strlen(a));
            flag=1;
            break;

        }
         printf("%s\n",s);

            for(l=0;l<k;l++)
            {
                a[l]=s[l];
            }
 n=k;
printf("%s\n",a);
        k=0;
        count=0;
    }


    //return 0;
}

int main() {
    int  t, i;
    scanf("%d",&t);
    char a[100001];
    for (i=0;i<t;i++) {
        scanf("%s",a);
        stringReduction(a);
        //printf("%d\n",res);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
