#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+5], p=0, f=0, r1=0, r2=0, c=0, mx=-1, s=0;
    bool stop=false;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            s=i+1;
            p=i;
            f=i;
            r1=i;
            r2=i;
            c=1;
            mx=1;
            break;
        }
    }

    if(c==0)
    {
        cout<<n-1<<endl;
        return 0;
    }

    for(int i=s; i<n; i++)
    {
        if(a[i]==0)
        {
            c++;
            f=i;
            if(c>=mx) stop = false;
            mx = max(c, mx);
        }
        else if(a[i]==1 && c!=0)
        {
            c--;
            if(stop==false)
            {
                r1=p;
                r2=f;
                stop = true;
            }
            if(c==0)
            {
                p=i+1;
                f=i+1;
            }
        }
        else if(c==0)
        {
            p=i+1;
            f=i+1;
        }
    }

    if(c==mx)
    {
        r1=p;
        r2=f;
    }

    for(int i=r1; i<=r2; i++)
    {
        a[i] = 1 - a[i];
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1) ans++;
    }

    cout<<ans<<endl;
    return 0;
}
