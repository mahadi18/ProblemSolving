#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll r, x, y, xp, yp;
    cin>>r>>x>>y>>xp>>yp;
    ll d = (x-xp)*(x-xp)+(y-yp)*(y-yp);
    ll sq = sqrt(d);
    ll stp = sq/(2*r);
    if(stp*2*r != sq) stp+=1;
    else if(sq*sq != d) stp+=1;
    cout<<stp<<endl;
    return 0;
}
