#include<bits/stdc++.h>
#define ff first
#define ss second

typedef long long ll;
using namespace std;

pair<ll, ll>p[100005];
pair<ll, ll>d[100005];

int main()
{
    ll n, b=0, mx=0, l=0, r=0;
    cin>>n;

    for(ll i=0; i<n; i++)
    {
        cin>>p[i].ff>>p[i].ss;

        l += p[i].ff;
        r += p[i].ss;
    }

    b = l-r;
    if(b<0) b = b*(-1);
    ll ix = 0, x=b, res=0;


    for(ll i=0; i<n; i++)
    {
        l = l - p[i].ff + p[i].ss;
        r = r - p[i].ss + p[i].ff;

        mx = l-r;
        if(mx<0) mx = mx*(-1);


        if(mx > x)
        {
            ix = i+1;
            res = mx;
            x = mx;
        }

        l = l + p[i].ff - p[i].ss;
        r = r + p[i].ss - p[i].ff;
    }

    if(res > b) cout<<ix<<endl;
    else cout<<0<<endl;

    return 0;
}
