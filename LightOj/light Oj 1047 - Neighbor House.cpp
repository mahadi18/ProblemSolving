#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1005][1005];
ll a[25][5];
ll n;

ll color(ll i, ll j)
{
    if(i==n) return a[i][j];
    if(dp[i][j] != -1) return dp[i][j];

    ll j1, j2, h1, h2;

    if(j==1)
    {
        j1=2;
        j2=3;
    }
    else if(j==2)
    {
        j1=1, j2=3;
    }
    else
    {
        j1=1;
        j2=2;
    }

    h1 = a[i][j] + color(i+1, j1);
    h2 = a[i][j] + color(i+1, j2);

    dp[i][j] = min(h1, h2);
    return dp[i][j];
}

int main()
{
    ll t;
    scanf("%lld", &t);
    for(ll c=1; c<=t; c++)
    {
        memset(dp, -1, sizeof(dp));
        getchar();
        scanf("%lld", &n);
        for(int i=1; i<=n; i++)
            for(ll j=1; j<=3; j++)
                scanf("%lld", &a[i][j]);

        ll p = color(1,1);
        ll q = color(1,2);
        ll s = color(1,3);

        ll ans = min(p, min(q,s));

        printf("Case %lld: %lld\n", c, ans);
    }
    return 0;
}
