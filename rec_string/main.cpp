#include <iostream>
#include <cstring>
using namespace std;
char s1[100];

int p=12;
int k=0;
void rec(char *s,int i)

{

     if(s[i]!=NULL)
     {
         rec(s,i+1);
     }


     if(s[i]==' ')
     {
         cout<<s1;
         cout<<strrev(s1);
     }
     else
     {
         s1[k++]=s[i];

     }

}


int main()
{
    cout << "Hello world!" << endl;

    rec("The sky is blue",0);


    return 0;
}
