#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, mn=0, mx=0;
    cin>>n>>m;
    ll d = n/m;
    ll pn = d*m;
    ll e = n - pn;
    mn = (((d+1)*(d))/2)*e + ((d*(d-1))/2)*(m-e);
    d = n-m+1;
    mx = ((d*(d-1))/2);
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
