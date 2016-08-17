#include <iostream>

using namespace std;

class first
{
private: int x=5;
    public:
    friend void sum(first a);
};
int sum(first a)
{
    cout<<a.x;
}

int main()
{
    cout << "Hello world!" << endl;
    second s=new second();
    s.sum();
    return 0;
}
