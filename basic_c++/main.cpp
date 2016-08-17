#include <iostream>

using namespace std;


class myfirst
{
    protected:int x=1,y;
    public :void fun(int x,int y);
};
class my:public myfirst
{
    public:void fun1(){cout<<x;}
};

void myfirst::fun(int x,int y)
{
    cout<<x+y;
}

int main()
{
    cout << "Hello world!" << endl;
    myfirst x;
    x.fun(1,2);
    my y;
    y.fun1();
    return 0;
}
