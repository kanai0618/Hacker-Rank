#include<stdio.h>
#include<string.h>

int main()
{
    char s[100]="ABABCABCDABC";
    int i,p,k=0,flag=0,count=0;



    while(flag!=1)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
            {
                count++;
            }
        }
        if(count==0) {printf("%s",s);flag=1;}
        else
        {
         //printf("%s\n",s);


            for(i=k; i<strlen(s); i++)
            {
                p=i;
                if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
                {
                    //printf("%d",i);
                    while(s[i]!=NULL)
                    {
                        s[p++]=s[i+3];
                        i++;
                    }
                }
                k=0;


            }
        }
        count=0;
    }

}
