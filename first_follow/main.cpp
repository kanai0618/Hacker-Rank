#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    char s1[100],s[100][100];
    int i,k=0,l=0;

    for(i=0; i<3; i++)
    {
        cin>>s[i];
    }

    for(i=0; i<3; i++)
    {
        if(s[i][0]>='A'&&s[i][0]<='Z')
        {
            s1[k++]=s[i][0];
        }
    }
    for(i=0; i<3;i++)
    {

            if(s[i][3]>='a'&&s[i][3]<='z')
            {
                cout<<s[i][3]<<endl;
            }
            else
            {
                cout<<"First"<<s[i][3]<<endl;
            }

          l=i;

    }





    return 0;
}
