#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0; i<m; i++)
        cin>>a[i];

    ll c=a[0]-1;

    for(ll i=1; i<m; i++)
    {
        ll d = a[i]-a[i-1];
        if(d<0)
            d=n+d;

        c+=d;
    }
    cout<<c<<endl;
    return 0;
}
