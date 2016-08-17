#include <iostream>
#include<string.h>
using namespace std;

long long int binomialCoeff(long long int n,long long int k)
{
    long long int C[n+1][k+1];
    long long int i, j;

    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}


int main()
{
   long long int x,t,sum=0,n,i;
   cin>>t;


   while(t>0)
   {
       cin>>n;
       for(i=0;i<=n;i++)
       {
           sum+=(binomialCoeff(n,i))%3;
       }
       cout<<(sum)%1000000007<<endl;sum=0;
       t--;
   }



}
