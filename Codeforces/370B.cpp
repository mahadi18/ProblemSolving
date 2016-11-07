#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll len=s.length();
    if(len%2 !=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll cl =0, cr = 0, cd = 0, cu = 0;

    for(ll i=0; i<len; i++)
    {
        if(s[i]=='L') cl++;
        else if(s[i]=='R') cr++;
        else if(s[i]=='D') cd++;
        else if(s[i]=='U') cu++;
    }
    ll ans=0, ans1=0, ans2=0;
    if(cl != cr)
    {
        ans1 = cl - cr;
        if( ans1 < 0) ans1 *= -1;
    }
    if(cd != cu)
    {
        ans2 = cd - cu;
        if(ans2 < 0) ans2 *= -1;
    }

    ans = (ans1+ans2)/2;
    cout<<ans<<endl;
    return 0;
}
