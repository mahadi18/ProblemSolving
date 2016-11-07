#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, k, c=0, f=0;
    cin>>n>>m>>k;
    ll a[m+5];
    for(ll i=0; i<=m; i++)
        cin>>a[i];
    for(ll i=0; i<m; i++)
    {
        for(ll j=0; j<32; j++)
        {
            ll p = a[m] & (1<<j);
            ll q = a[i] & (1<<j);

            if(p!=q) c++;

            if(c>k) break;
        }
        if(c<=k) f++;
        c=0;
    }
    cout<<f<<endl;
    return 0;
}
