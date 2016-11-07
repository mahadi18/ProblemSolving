#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, p, c=0;
    cin>>n;
    ll a[n+1];
    cin>>a[0];

    for(ll i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
        {
            p=i;
            c++;
        }
    }

    if(c==0) cout<<0<<endl;
    else if(c>1) cout<<-1<<endl;
    else if(a[n-1] > a[0]) cout<<-1<<endl;
    else if(a[n-1] <= a[0]) cout<<n-p<<endl;

    return 0;
}
