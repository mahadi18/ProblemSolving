#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX_N 1005
#define MAX_W 1005
ll n;
ll dp[MAX_N+1][MAX_W+1];
ll weight[MAX_N+1];
ll cost[MAX_N+1];
ll CAP;
ll func(ll i,ll w)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    ll profit1=0,profit2=0;
    if(w+weight[i]<=CAP)
        profit1=cost[i]+func(i+1,w+weight[i]);

    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{

    //freopen("in","r",stdin);
    memset(dp,-1,sizeof(dp[0][0])*(MAX_N+1)*(MAX_W+1) );
    //scanf("%d%d",&n,&CAP);
    cin>>n>>CAP;
    for(ll i=1; i<=n; i++)
    {
        //scanf("%d%d\n",&weight[i],&cost[i]);
        cin>>weight[i]>>cost[i];
    }
    ll ans = func(1,0);
    cout<<ans<<endl;
    return 0;
}


/*
5 10
1 120
7 400
4 280
3 150
4 200
*/


