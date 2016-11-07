#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, d, c=0;
    cin>>n>>d;
    long int a[n];
    for(long int i=0; i<n; i++)
        cin>>a[i];

    for(long int i=1; i<n; i++)
    {
        if(a[i] > a[i-1])
            continue;
        else if(a[i] == a[i-1])
        {
            c++;
            a[i]+=d;
        }
        else
        {
            int diff = a[i-1]-a[i]+1;
            int temp = diff;
            diff /=d;
            if(temp%d) diff++;
            c+=diff;
            a[i]+=(d*diff);

        }
    }
    cout<<c<<endl;
    return 0;
}
