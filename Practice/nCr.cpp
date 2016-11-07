#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, r;
ll dp[70][70];

ll nCr(ll n, ll r)
{
    if(n==r) return 1;
    if(r==0) return 1;

    if(dp[n][r]!=-1) return dp[n][r];
    else dp[n][r] = nCr(n-1, r) + nCr(n-1, r-1);

    return dp[n][r];
}

int main()
{
    ll t, no=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        memset(dp, -1,  sizeof(dp[0][0]) * 70 * 70);
        ll ans = nCr(n,r);
        cout<<"Case "<<++no<<": "<<ans<<endl;
    }
    return 0;
}
