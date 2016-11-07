#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, ca=0, cb=0, a, b;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a>b) ca++;
        else if(a<b) cb++;
    }
    if(ca>cb) cout<<"Mishka"<<endl;
    else if(ca<cb) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
