#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, t, c=0, p=0, sum=0, ans=0;
    cin>>n>>t;
    ll a[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        c++;

        if(sum>t)
        {
            ans = max(ans, c-1);
            for(ll j=p; j<=i; j++)
            {
                sum -=a [j];
                c--;

                if(sum<=t)
                {
                    p=j+1;
                    break;
                }
            }
        }
    }

    ans = max(ans, c);
    cout<<ans<<endl;

    return 0;
}
