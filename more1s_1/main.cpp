#include <iostream>
#include<cstring>
using namespace std;

void rec(int ones,int zeros,string s,int n)
{
    if(n==s.length())
    {
        cout<<s<<endl;
        return;
    }
    rec(ones+1,zeros,s+"1",n);
    if(ones>zeros)
        rec(ones,zeros+1,s+"0",n);
}

int main()
{
    cout << "Hello world!" << endl;
    string s="";
    rec(0,0,s,4);

    return 0;
}
