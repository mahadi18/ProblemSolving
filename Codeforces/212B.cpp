#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[3005];

/*bool srch(ll x, ll s, ll n)
{
    ll m = (s+n)/2;
    if(a[m]==x)
        return true;
    else if(x>a[m])
        return srch(x, m, n);
    else if(x<a[m])
        return srch(x, s, m);

    return false;
}*/
int main()
{
    ll n, m;
    cin>>n>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>a[i];

        if(a[i]==1 || a[i]==n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    sort(a, a+m);
    ll d;
    for(ll i=0, p=1; p<n-3, i<m; i++)
    {
        d = a[i]-p;
        if(d>=3)
        {
            p=a[i]-1;
            i--;
        }
        else if(d==2)
        {
            if(a[i]+1 != a[i+1])
            {
                p=a[i]+1;
            }
            else
            {
                p++;
                i--;
            }
        }
        else if(d==1)
        {
            if(a[i]+1==a[i+1])
            {
                if(a[i]+2==a[i+2])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else
                {
                    p+=3;
                    i++;
                }
            }
            else if(a[i]+2==a[i+1])
                p+=2;

            else p+=3;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
