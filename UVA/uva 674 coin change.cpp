#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll a[5] = {50, 25, 10, 5, 1};
ll dp[6][7500];

ll change(ll i, ll x)
{
    if(i>=5)
    {
        if(x==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][x] != -1)
    {
        return dp[i][x];
    }

    ll ret1 = 0, ret2 = 0;
    if(x-a[i]>=0)
        ret1 = change(i, x-a[i]);
    ret2 = change(i+1, x);

    dp[i][x] = ret1 + ret2;

    return dp[i][x];
}

int main()
{
    ll x;
    memset(dp, -1, sizeof(dp));
    while(scanf("%lld", &x) !=EOF)
    {
        //cout<<"x = "<<x<<endl;
        cout<<change(0, x)<<endl;
    }
    return 0;
}
