#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll L;
        double l, w, r, pi, rd, gn;
        scanf("%lf", &l);
        pi = acos(-1);
        //l = (double)L;
        w = (l*60.00)/100.00;
        r = (l*20.00)/100.00;

        rd = pi*r*r;
        gn = (l*w)-rd;

        printf("%.2lf %.2lf", rd, gn);
        cout<<endl;
    }

    return 0;
}
