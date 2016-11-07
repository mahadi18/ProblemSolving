#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, a[7];
    cin>>t;

    for(ll k=0; k<t; k++)
    {
        for(ll i=0; i<5; i++)
        {
            cin>>a[i];
        }

        ll mx = 0 ;
        for(ll i=0; i<5; i++)
        {
            for(ll j=i+1; j<5; j++)
            {
                mx = max(a[i]*a[j], mx);
            }
        }
        cout<<mx<<endl;

    }
    return 0;
}
