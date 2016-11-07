#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[105];

int main()
{
    ll n, l=0, r=0, f=0;
    cin>>n;

    for(ll i=0; i<n; i++)
        cin>>a[i];
    while(n--)
    {
        for(ll i=0; i<n; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i], a[i+1]);
                cout<<i+1<<" "<<i+2<<endl;
            }
        }
    }

    return 0;
}


