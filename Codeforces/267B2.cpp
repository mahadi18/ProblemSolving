#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, k, c=0, f=0, x;
    cin>>n>>m>>k;
    ll a[m+5];
    for(ll i=0; i<=m; i++)
        cin>>a[i];

    for(ll i=0; i<m; i++)
    {
        x = a[i]^a[m];

        while(x>0)
        {
            if(x%2 != 0)
                c++;
            x/=2;
            if(c>k) break;
        }
        if(c<=k) f++;
        c=0;
    }
    cout<<f<<endl;
    return 0;
}

