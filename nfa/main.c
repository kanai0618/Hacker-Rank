
#include<stdio.h>
int ret[100];
static int position=0;
static int sc=0;
void nfa(int st,int p,char *s)
{    int i,sp,fs[15],fsc=0;
    sp=st;position=p;sc=st;
    while(*s!=NULL)
    {if(isalpha(*s))
        {ret[position++]=sp;
        ret[position++]=*s;
        ret[position++]=++sc;}
    if(*s=='.')
        {sp=sc;
         ret[position++]=sc;
         ret[position++]=238;
         ret[position++]=++sc;
         sp=sc;}
    if(*s=='|')
        {sp=st;
         fs[fsc++]=sc;}
    if(*s=='*')
        {ret[position++]=sc;
         ret[position++]=238;
         ret[position++]=sp;
         ret[position++]=sp;
         ret[position++]=238;
         ret[position++]=sc;
         }
     if (*s=='(')
        {char ps[50];
         int i=0,flag=1;
         s++;
           while(flag!=0)
            {ps[i++]=*s;
             if (*s=='(')
                flag++;
             if (*s==')')
                flag--;
             s++;}
             ps[--i]='\0';
             nfa(sc,position,ps);
             s--;
        }
     s++;
    }
    sc++;
      for(i=0;i<fsc;i++)
         {ret[position++]=fs[i];
          ret[position++]=238;
          ret[position++]=sc;
         }
          ret[position++]=sc-1;
          ret[position++]=238;
          ret[position++]=sc;
}
void main()
{    int i;
    char *input;

    printf(" Please enter your regular expression :");
    gets(input);
    nfa(1,0,input);
    printf("\nstate  inputut  state\n");
    //for(i=0;i%d\n,ret[i],ret[i+1],ret[i+2]);
    printf("\n");
    getch();
}
