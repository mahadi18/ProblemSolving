#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>v;

int main()
{
    ll n;
    cin>>n;
    ll a;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll q;
    cin>>q;
    vector<ll>::iterator up;
    for(ll i=0; i<q; i++)
    {
        ll x;
        cin>>x;
        up = upper_bound(v.begin(), v.end(), x);
        cout<<up-v.begin()<<endl;
    }

    return 0;
}
