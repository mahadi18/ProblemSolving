#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001], dp[100];

int reccur(int x)
{
    if(x==0)
        return 0;

    if(dp[x] != -1)
    {
        return dp[x];
    }

    int ret = 1023456789;

    for(int i=0; i<n; i++)
    {
        if(x-a[i]>=0)
        ret = min( ret, reccur(x-a[i]));
    }
    //saving best result
    dp[x] = ret+1;
    //return ans
    return dp[x];
}

int main()
{
    int T;
    cin>>T;
    for(int k=1; k<=T; k++)
    {
    	memset(dp, -1, sizeof(dp));
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>a[i];
        int make, ans;
        cin>>make;

        ans = reccur(make);

        cout<<"Case "<<k<<": "<<ans<<endl;
    }
    return 0;
}


/*
2
5
1 5 25 30 50
90
5
60 30 10 2 6
110

*/
