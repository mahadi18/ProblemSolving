#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10002];
ll mn = 99999, r=0, m=0, n;

int main()
{
    while(scanf("%lld", &n) !=EOF)
    {
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ll x;
        cin>>x;

        for(ll i=0; i<n-1; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==x)
                {
                    if(a[j]-a[i]<mn)
                    {
                        r=a[i];
                        m=a[j];
                        mn = a[j]-a[i];
                    }
                    break;
                }
            }
        }

        if(r!=0 || m!=0)
            cout<<"Peter should buy books whose prices are "<<r<<" and "<<m<<"."<<endl<<endl;
        mn=99999999;
        r=0;
        m=0;
    }
    return 0;
}
