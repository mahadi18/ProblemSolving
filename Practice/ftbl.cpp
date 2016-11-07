#include <bits/stdc++.h>
#define ll long long
using namespace std;

char s[500][500];
ll a[500];
ll mx = 0;
ll fl = 0;

int main()
{
    ll t;
    cin>>t;
    for(ll k=1; k<=t; k++)
    {
        ll n;
        cin>>n;
        if(n<2 && n>30) return 0;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='1') a[i]+=2;
                if(s[i][j]=='d') a[i]+=1;

            }
            mx = max(a[i], mx);
        }

        for(ll i=0; i<n; i++)
        {
            if(a[i] == mx)
            {
                if(fl == 1)cout<<" ";
                cout<<i+1;
                fl = 1;
            }
        }
        cout<<endl;
        mx = 0;
        memset(a, 0, sizeof(a));
        fl = 0;
    }

    return 0;
}


