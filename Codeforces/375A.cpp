#include<bits/stdc++.h>
using namespace std;

int main()
{
    long a[3], ans=0;

    cin>>a[0]>>a[1]>>a[2];

    sort(a, a+3);

    ans = a[2]-a[0];

    cout<<ans<<endl;

}
