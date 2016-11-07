#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, a, sum=0;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    if(n==1)
    {
        if(sum==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if(sum==n-1)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
