#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000000
using namespace std;
ll a;
ll dp[100000005];
ll fn( ll n )
{
    if( n == 0 ) return n % MOD;
    if( n == 1 ) return n % MOD;

    if(dp[n]!=-1) return dp[n];
    else
        dp[n] = (fn(n-1) + fn(n-2))% MOD;
    return dp[n];
}
int main()
{
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases--)
    {
        memset(dp, -1, sizeof(dp));
        scanf("%lld", &a);
        printf("ans = %lld\n",fn(a));
    }
    return 0;
}

