#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
int main()
{
    ll x, y, n, ans;
    cin>>x>>y>>n;
    if(n%6==0) ans = x-y;
    else if(n%6==1) ans = x;
    else if(n%6==2) ans = y;
    else if(n%6==3) ans = y-x;
    else if(n%6==4) ans = -x;
    else if(n%6==5) ans = -y;

    if(ans<0) cout<<(ans%mod+mod)%mod<<endl;
    else cout<<ans%mod<<endl;
    return 0;
}
