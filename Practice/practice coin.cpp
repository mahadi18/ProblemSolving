#include<bits/stdc++.h>
using namespace std;
int a[] = {1, 5, 25, 10, 50};
int n = 5;
int dp[91];

int coin(int x)
{
    if(x==0) return 0;
    if(dp[x] != -1) return dp[x];

    int ret = 1023456789;
    for(int i=0; i<n; i++)
    {
        if(x-a[i]>=0)
        {
            if(x-a[i]==0)
            cout<<"ret = "<<ret<<endl;
            ret = min(ret, coin(x-a[i]));
        }
    }

    dp[x] = ret + 1;
    return dp[x];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int x = 90;
    cout<<"Minimum coin needed = "<<coin(x)<<endl;
    return 0;
}
