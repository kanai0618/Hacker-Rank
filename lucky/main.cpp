#include <iostream>

using namespace std;




int main()
{

int n;
cin>>n;
int ln=0;
int x=10;
while(n!=0)
{
   int a=n%10;
   if(a<=3) ln=3*x+ln;
   else ln=5*x+ln;
   n=n/10;
   x=x*10;
}
ln=ln/10;
cout<<ln;

}

