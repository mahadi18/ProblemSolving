#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m,x, y, c=0;
    cin>>n>>m;
    for(ll i=1; i<=n; i++)
    {
        x = i%5;
        y = 5-x;

        if(y>0 && y<=m) c++;
        else continue;

        c+=(m-y)/5;
    }
    cout<<c<<endl;
    return 0;
}
