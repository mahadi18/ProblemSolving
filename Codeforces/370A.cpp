#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    b[n-1] = a[n-1];
    for(ll i=n-2; i>=0; i--)
    {
        b[i] = a[i] + a[i+1];
    }
    for(ll i=0; i<n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
