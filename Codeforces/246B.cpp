#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005], b[100005], cnt[100005], hm[100005];

int main()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        cnt[a[i]]++;
    }
    for(ll i=1; i<=n; i++)
    {
        hm[i]=n-1;
        hm[i]+=cnt[b[i]];
        cout<<hm[i]<<" "<<((n-1)*2)-hm[i]<<endl;
    }
    return 0;
}
