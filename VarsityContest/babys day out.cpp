#include<bits/stdc++.h>
#define ll long long
using namespace std;
//vector<ll>v;
ll ar[1005];
ll n, m;

ll calc(ll a, ll b)
{
    if(a==b)
        return b;

    //cout<<"a= "<<a<<" b = "<<b<<endl;
    ll c = (a+b)/2;
    //cout<<"c = "<<c<<endl;
    ll l=1, k=0;

    for(ll i=0; i<n; i++)
    {
       // cout<<"ar["<<i<<"] = "<<ar[i]<<endl;
        //cout<<"ar["<<i<<"] + k = "<<ar[i]+k<<endl;
        if( (ar[i]+k) <= c)
        {
            k += ar[i];
           // cout<<"k = "<<k<<endl;
        }
        else
        {
            l++;
            //cout<<"l = "<<l<<endl;
            k = ar[i];
            //cout<<"k = "<<k<<endl;
        }
        if(l>m)
            break;
    }

    if(l>m)
    {
        if( (a+1) == b) return b;
        else return calc(c,b);
    }
    else
    {
        if( (a+1) == b) return a;
        else return calc(a,c);
    }
}

int main()
{
    ll test;
    cin>>test;
    for(ll p=1; p<=test; p++)
    {
        cin>>n>>m;
        int sum =-1, mx = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            if(ar[i]>mx)
                mx = ar[i];
        }

        //cout<<"max = "<<mx<<" sum = "<<sum<<endl;
        int ans = calc(mx, sum);
        cout<<"Case "<<p<<": "<<ans<<endl;
        sum=0;
    }
    return 0;
}


/*
2
5 3
1 2 3 4 5
3 2
4 78 9
*/
