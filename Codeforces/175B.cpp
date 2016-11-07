#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, s, t, c=1;
    cin>>n>>s>>t;
    ll a[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    ll x = a[s];
    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }
    if(a[s]==t)
    {
        cout<<c<<endl;
        return 0;
    }

    if(a[s]==s || a[t]==t) cout<<-1<<endl;
    else
    {
        while(a[x]!=s)
        {
            if(a[x]==t)
            {
                cout<<c+1<<endl;
                return 0;
            }
            else if(a[x]==s)
            {
                cout<<-1<<endl;
                return 0;
            }
            c++;
            x = a[x];
            //cout<<"a["<<x<<"] = "<<a[x]<<endl;
        }
        cout<<-1<<endl;
    }
    return 0;
}
