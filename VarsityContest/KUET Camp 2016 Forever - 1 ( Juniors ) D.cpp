#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, sum=0, i;
    cin>>n;
    for(i=1; i<n; i++)
    {
        sum+=(i*(i+1))/2;
        if(sum>n) break;
    }
    if(n==1) cout<<"1"<<endl;
    else
        cout<<i-1<<endl;
    return 0;
}
