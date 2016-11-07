#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, l=1, r=1;
    bool L=false, R=false;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b, b+n);
    /*
    for(ll i=0; i<n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    */
    for(ll i=0; i<n; i++)
    {
        if(a[i] !=b[i])
        {
            l = i+1;
            L = true;
            break;
        }
    }

    if(L)
    {
        for(ll i=l-1; i<n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                r = i+1;
                R=true;
                break;
            }
            else if(i==n-2)
            {
                r = n;
                R=true;
            }
        }
    }

    sort(a+l-1, a+r);
    if(R)
        for(ll i = r-1; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                cout<<"no"<<endl;
                return 0;
            }
        }

    cout<<"yes"<<endl<<l<<" "<<r<<endl;
    return 0;
}
