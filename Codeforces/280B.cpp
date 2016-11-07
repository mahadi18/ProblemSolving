#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, l;
    double d=0.0;
    cin>>n>>l;
    ll a[n+1];

    for(ll i=0; i<n; i++)
        cin>>a[i];

    sort(a, a+n);

    d = a[0] - 0;
    if(a[0]==0) d/=2;

    for(ll i=1; i<n; i++)
    {
        if( (a[i]-a[i-1]-d) > d )
            d = (double)(a[i]-a[i-1])/2;
    }

    if(a[n-1]!=l && (a[n-1]+d) < l)
        d = (double) (l-a[n-1]);


    printf("%lf\n", d);
    return 0;
}
