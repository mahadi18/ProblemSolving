#include<bits/stdc++.h>
#define ll long long
#define mod 100000007
using namespace std;
ll n, k;
ll a[55], b[55];
ll dp[52][22][1002];

ll change(ll i, ll t, ll x)
{
    if(i==n)
    {
        if(x==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][t][x] != -1)
    {
        return dp[i][t][x];
    }

    ll ret1 = 0, ret2 = 0;
    if(t<b[i] && x-a[i]>=0)
        ret1 = change(i, t+1, x-a[i]);

    ret2 = change(i+1, 0, x);

    dp[i][t][x] = (ret1 + ret2)%mod;

    return dp[i][t][x];
}

int main()
{
    ll T;
    cin>>T;
    for(ll c=1; c<=T; c++)
    {
        cin>>n>>k;
        memset(dp, -1, sizeof(dp));
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }

        printf("Case %lld: %lld\n", c, (change(0, 0, k) ));
    }
    return 0;
}
