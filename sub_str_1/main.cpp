#include <iostream>

using namespace std;

int dictionary(string s)
{
    string s1[]={"mobile","samsung","sam","sung","man","mango",
                           "icecream","and","go","i","like","ice","cream"};
     int z=sizeof(s1)/sizeof(s1[0]);
     for(int i=0;i<z;i++)
     {
         if(s1[i].compare(s)==0)
            return 1; break;
     }
     return 0;


}

int wordcheck(string s)
{
    int len=s.size();
    if(len==0) return 1;
    for(int i=1;i<=len;i++)
    {
        if((dictionary(s.substr(0,i)))&&(wordcheck(s.substr(i,len-i))))
            return 1;
    }
    return 0;
}

int main()
{
    cout << "Hello world!" << endl;
    string s="i";
    cout<<wordcheck("mobile");



    return 0;
}
