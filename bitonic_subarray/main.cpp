#include <iostream>

using namespace std;

void rec(int *a,int n,int k)
{
    int i;
    if(k==n)
    {
        for(i=0;i<3;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        return ;
    }
    if(k<n)
    {a[n-k]=0;


    rec(a,n,k+1);
    a[n-k]=1;
    rec(a,n,k+1);}
}


int main()
{

int a[3]={0,0,0};
rec(a,3,1);




    return 0;
}
