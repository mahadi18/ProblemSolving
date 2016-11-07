#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    ll p=1;
    for(ll i=0; i<n; i++)
    {
        if(a[i]>=p) p++;
    }
    cout<<p<<endl;
    return 0;
}
