#include <iostream>
#include <math.h>
using namespace std;

// A utility function that returns true if x is perfect square
bool isPerfectSquare(unsigned long long x)
{
    unsigned long long s = sqrt(x);
    return (s*s == x);
}

// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(unsigned long long n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

// A utility function to test above functions
int main()
{
  unsigned long long n,m;
    cin>>n;
    while(n>0)
        {
        cin>>m;
        if(isFibonacci(m))
            {
            cout<<"IsFibo"<<endl;

        }
        else

            {cout<<"IsNotFibo"<<endl;
            }
        n--;
    }
  return 0;
}
