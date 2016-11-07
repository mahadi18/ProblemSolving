#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll a[301][301];
ll dp[301][301];
ll collect(ll i, ll j)
{
    if (a[i][j]==0) return 0;
    if (i==k-1) return a[i][j];

    if(dp[i][j] != -1) return dp[i][j];

    ll r1=0, r2=0;
    r1 = a[i][j]+collect(i+1,j);
    r2 = a[i][j]+collect(i+1,j+1);

    dp[i][j] = max(r1,r2);
    return dp[i][j];
}

int main()
{
    ll t;
    cin>>t;
    for(ll s=1; s<=t; s++)
    {
        memset(dp, -1, sizeof(dp));
        memset(a, 0, sizeof(a));

        //cin>>n;
        scanf("%lld", &n);
        k = 2*n - 1;

        for(ll i=0; i<n; i++)
            for(ll j=0; j<=i; j++)
                scanf("%lld",&a[i][j]);
        ll l=1;
        for(ll i=n; i<k; i++)
        {
            for(ll j=l; j<n; j++)
                scanf("%lld",&a[i][j]);
            l++;
        }

        printf("Case %lld: %lld\n", s, collect(0,0));
    }

    return 0;
}
