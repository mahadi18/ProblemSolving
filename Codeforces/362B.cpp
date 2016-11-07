#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    char c[210], s[210];
    ll i=0, p=0;
    while(cin>>c[i] && c[i]!='e')
    {
        p=i;
        i++;
    }
    ll n;
    cin>>n;
    /*if(c[0]=='0' && c[2]=='0' && n==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else*/
    if(n+1<=p)
    {
        for(ll i=1; i<n+1; i++)
        {
            c[i] = c[i+1];
        }
        c[n+1] = '.';
        if(c[0]!='0') cout<<c[0];
        else if(c[0]=='0' && n==0) cout<<c[0];
        for(ll i=p; i>=n+2; i--)
        {
            if(c[i] !='0')
            {
                p=i;
                break;
            }
            else
            {
                if(i==n+2) p = n;
            }
        }
        for(ll i=1; i<=p; i++)
        {
            if(i==p && c[i]=='.') continue;
            else cout<<c[i];
        }
        cout<<endl;
    }
    else
    {
        for(ll i=1; i<n+1; i++)
            c[i] = c[i+1];

        for(ll i=p; i<n+1; i++)
            c[i] = '0';

        if(c[0]!='0') cout<<c[0];
        else if(c[0]=='0' && n==0) cout<<c[0];

        for(ll i=1; i<n+1; i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}

