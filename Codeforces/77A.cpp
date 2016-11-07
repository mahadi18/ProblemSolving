#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int d=0, z=0, n=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            n=0;
            z++;
            if(z==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            z=0;
            n++;
        }
        if(n==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
