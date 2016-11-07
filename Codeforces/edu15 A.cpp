#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+6];
    ll sum = 0, cnt=1;
    cin>>a[0];
    for(ll i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])
        {
            cnt++;
        }
        else
        {
            //cout<<"sum = "<<sum<<" cnt = "<<cnt<<endl;
            sum = max(cnt, sum);
            cnt=1;
            //cout<<"Then, sum = "<<sum<<" cnt = "<<cnt<<endl;
        }
    }
    sum = max(sum, cnt);
    cout<<sum<<endl;
    return 0;
}
