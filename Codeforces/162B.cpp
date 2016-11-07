#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    cin>>a[0];
    ll sum=a[0]+1;

    for(ll i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i-1]<=a[i])
        {
            sum+=1+(a[i]-a[i-1])+1;
        }
        else
        {
            sum+=(a[i-1]-a[i])+1+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
