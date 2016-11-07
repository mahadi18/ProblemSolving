#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll f=0, ix=0;
    string s;
    cin>>s;
    ll l = s.length();

    for(ll i=0; i<l-1; i++)
    {
        if( (s[i]-'0')%2==0 )
        {
            ix = i;

            if((s[l-1]-'0')>(s[i] - '0'))
            {
                swap(s[i], s[l-1]);
                f=1;
                break;
            }
        }
    }

    if(f==0 && (s[ix]-'0')%2==0)
    {
        swap( s[ix], s[l-1]);
        f=1;
    }
    if(f==0)
        cout<<-1<<endl;
    else
        cout<<s<<endl;
    return 0;
}
