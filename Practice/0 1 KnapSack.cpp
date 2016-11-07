#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[70][70];
int item, cap;
int weight[1000];
int profit[1000];
int steal(int i, int w)
{
    if(i==item+1) return 0;

    if(dp[i][w] != -1) return dp[i][w];

    int p1 = 0, p0 = 0;
    if( (w + weight[i]) <=cap)
        p1=profit[i]+steal(i+1,w+weight[i]);

    p0 = steal(i+1, w);

    dp[i][w] = max(p1, p0);
    return dp[i][w];
}

int main()
{
    memset(dp, -1, sizeof(dp[0][0]) * 70 * 70);
    cin>>item>>cap;
    for(int i=1; i<=item; i++)
    {
        cin>>profit[i]>>weight[i];
    }
    int ans = steal(1,0);
    cout<<ans<<endl;
    return 0;
}
