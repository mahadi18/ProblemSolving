#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1005];
ll b[1005];
ll n, sum=0;

ll srch(ll x, ll s)
{
    for(ll i=s+1; i<=n; i++)
    {
        if(a[i]==x && b[i]!=-1)
            return i;
    }
}
int main()
{
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        memset(b, 0, sizeof(b));
    }
    ll p = n/2;
    ll m = sum/p;
    for(ll i=1; i<=n; i++)
    {
        if(b[i] != -1)
        {
            ll y = srch(m-a[i], i);
            cout<<i<<" "<<y<<endl;
            b[i] = -1;
            b[y] = -1;
        }
    }
    return 0;
}
