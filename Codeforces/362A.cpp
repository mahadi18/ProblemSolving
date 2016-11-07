#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, s, x, n;
    cin>>t>>s>>x;

    if(t==x)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    n = (x-t)/s;
    if((n!=0) && (n*s)==(x-t))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    n = (x-1-t)/s;
    if((n!=0) && (n*s)==(x-1-t))
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}
