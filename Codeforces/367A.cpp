#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b, v;
    double t = 99999.99;
    ll n;
    cin>>a>>b>>n;
    ll x, y;
    //cout<<"a = "<<a<<" b = "<<b<<endl;

    for(ll i=0; i<n; i++)
    {
        cin>>x>>y>>v;
        //cout<<"x = "<<x<<" y = "<<y<<" v = "<<v<<endl;
        double d = (double)sqrt(((x-a)*(x-a)+(y-b)*(y-b) ))/(v*1.00);
        //cout<<"x-a = "<<x-a<<" y-b = "<<y-b<<endl;
        //cout<<" Prev t = "<<t<<" d = "<<d<<endl;
        t = min(t, d);
        //cout<<"New t = "<<t<<endl<<endl;
    }

    cout<<t<<endl;
    return 0;
}
