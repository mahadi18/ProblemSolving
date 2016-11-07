#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll p, q, l, r, cnt=0, flag=0;
    cin>>p>>q>>l>>r;

    ll a[p], b[p], c[q], d[q];

    for(ll i=0; i<p; i++)
        cin>>a[i]>>b[i];

    for(ll i=0; i<q; i++)
        cin>>c[i]>>d[i];

    for(ll k=l; k<=r; k++)
    {
        for(ll i=0; i<p; i++)
        {
            for(ll j=0; j<q; j++)
            {
                if(c[0]>a[p-1] && c[0]>b[p-1])
                    goto OUT;

                 if(a[i]==c[j]+k || a[i]==d[j]+k || b[i]==c[j]+k || b[i]==d[j]+k || (c[j]+k>a[i] && c[j]+k<b[i]) || (d[j]+k>a[i] && d[j]+k<b[i]) || (c[j]+k<a[i] && d[j]+k>b[i]) || (c[j]+k>a[i] && d[j]+k<b[i]))
                {
                    cnt++;
                    flag = 1;
                    break;
                }

            }
            if(flag==1)
            {
                flag=0;
                break;
            }
        }
    }
OUT:;

    cout<<cnt<<endl;
    return 0;
}
