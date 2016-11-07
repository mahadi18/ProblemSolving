#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k, ans=0, sum=0;
    cin>>n>>k;
    ll a[n+1];
    cin>>a[0];
    sum=a[0];
    for(ll i=1; i<n; i++)
    {
        cin>>a[i];
        ans+=a[i]*a[i-1];
        sum+=a[i];
    }

    ll c[k+1];
    for(ll i=0; i<k; i++)
        cin>>c[i];

    ans+=(a[0]*a[n-1]);
    ll ss = sum, mul;

    for(ll i=0; i<k; i++)
    {
        ll x = c[i]-1;
        if(c[i]==1) mul = ss - a[x+1] - a[n-1] - a[x];
        else if(c[i]==n) mul = ss - a[x-1] - a[0] - a[x];
        else mul = ss - a[x-1] - a[x+1] - a[x];

        ans += (mul*a[x]);
        if(c[i]+1 != c[i+1]) ss -= a[x];
    }
    cout<<ans<<endl;
    return 0;
}

