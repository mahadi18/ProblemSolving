#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1002][102];
ll item, cap;
ll weight[1002];
ll profit[1002];
ll steal(ll i, ll w)
{
    if(i==item+1) return 0;

    if(dp[i][w] != -1) return dp[i][w];

    ll p1 = 0, p0 = 0;
    if( (w + weight[i]) <=cap)
        p1=profit[i]+steal(i+1,w+weight[i]);

    p0 = steal(i+1, w);

    dp[i][w] = max(p1, p0);
    return dp[i][w];
}

int main()
{
    ll t;
    cin>>t;
    for(ll k=0; k<t; k++)
    {
        cin>>item;
        //>>cap;
        for(ll i=1; i<=item; i++)
        {
            cin>>profit[i]>>weight[i];
        }
        ll m, ans=0;
        cin>>m;
        for(ll i=0; i<m; i++)
        {
            memset(dp, -1, sizeof(dp));
            cin>>cap;
            ans += steal(1,0);
        }
        cout<<ans<<endl;
    }
    return 0;
}
