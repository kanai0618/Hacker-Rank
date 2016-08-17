#include<stdio.h>
char arr[100];
static int cnt=0;
void powerSet(int n,char inp[],int k,int i)
{
int j;
	if(n==0)
	{
		printf("%d ) ",cnt);
            arr[i]='\0';
			printf(" %s",arr);
		printf("\n");
		cnt++;
	}
	else
	{
		powerSet(n-1,inp,k+1,i);
		arr[i]=inp[k];
		powerSet(n-1,inp,k+1,i+1);
	}


}

int main()
{
int n;
char inp[3]={'a','b','c'};
n=sizeof(inp)/sizeof(inp[0]);
powerSet(n,inp,0,0);
return 1;
}
