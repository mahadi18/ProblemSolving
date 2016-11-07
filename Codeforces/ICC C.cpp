#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
typedef long long ll;

ll n, m, k;
pair<ll, ll>p[100000005];


int main()
{

    cin>>n>>m>>k;
    ll a[k+5], b[k+5];

    ll hh = 0;

    for(ll i=0; i<k; i++)
    {
        cin>>a[i]>>b[i];
    }

    ll x=1, y=1, t=1;
    ll f = 1, w=1;
    t = 1;

    while(1)
    {
        if((x==0 && y==0) || (x==n && y==m) || (x==n && y==0) || (x==0 && y==m))
            break;

        if(f==1 && (w==1 || w==4))
        {
            x++;
            y++;
            t++;
            if(p[t].ff == 0 && p[t].ss == 0)
            {
                p[t].ff = x;
                p[t].ss = y;
            }


        }

        else if(f==3 && (w==2 || w==3))
        {
            x--;
            y--;
            t++;
            if(p[t].ff == 0 && p[t].ss == 0)
            {
                p[t].ff = x;
                p[t].ss = y;
            }
        }

        else if(f==2 && (w==3 || w==4 ))
        {
            x++;
            y--;
            t++;
            if(p[t].ff == 0 && p[t].ss == 0)
            {
                p[t].ff = x;
                p[t].ss = y;
            }
        }

        else if(f==4 && (w==1 || w==2 ))
        {
            x--;
            y++;
            t++;
            if(p[t].ff == 0 && p[t].ss == 0)
            {
                p[t].ff = x;
                p[t].ss = y;
            }
        }

        if((x==0 && y==0) || (x==n && y==m) || (x==n && y==0) || (x==0 && y==m))
            break;

        if(y==0 && f==2)
        {
            f=1;
            w=1;
        }
        else if(y==0 && f==3)
        {
            f=4;
            w=1;
        }

        else if(x==n && f==2)
        {
            f=3;
            w=2;
        }
        else if(x==n && f==1)
        {
            f=4;
            w=2;
        }

        else if(y==m && f==4)
        {
            f=3;
            w=3;
        }
        else if(y==m && f==1)
        {
            f=2;
            w=3;
        }

        else if(x==0 && f==3)
        {
            f=2;
            w=4;
        }
        else if(x==0 && f==4)
        {
            f=1;
            w=4;
        }
    }

    for(ll i=0; i<k; i++)
    {

        if(a[i]==1 && b[i]==1)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            for(ll j=0; j<t; j++)
            {
                if(a[i]==p[j].ff && b[i]==p[j].ss)
                {
                    cout<<j<<endl;
                    hh = 1;
                    break;
                }
            }

            if(hh==0)
            {
                cout<<-1<<endl;
            }
            hh = 0;

        }

    }

    return 0;
}


