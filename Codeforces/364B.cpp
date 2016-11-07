#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, r=0, c=0;
    cin>>n>>m;
    ll row[n+5], col[n+5];
    ll tot = n*n, bad;

    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));



    for(ll i=1; i<=m; i++)
    {
        //cout<<endl;
        ll x, y;
        cin>>x>>y;
        if(row[x]==0 && col[y]==0)
        {
            //cout<<"ager total = "<<tot<<endl;
            bad = n+n-1-r-c;
            //cout<<"bad = "<<bad<<endl;
            tot -= bad;
            //cout<<"total = "<<tot<<endl;
            r++;
            c++;
            row[x]=1;
            col[y]=1;
            cout<<tot<<" ";
        }
        else if(row[x]==0 && col[y]==1)
        {
            //cout<<"ager total = "<<tot<<endl;
            bad = n-1-c+1;
            //cout<<"bad = "<<bad<<endl;
            tot-=bad;
            //cout<<"total = "<<tot<<endl;
            r++;
            row[x]=1;
            cout<<tot<<" ";
        }
        else if(row[x]==1 && col[y]==0)
        {
            //cout<<"ager total = "<<tot<<endl;
            bad = n-1-r+1;
            //cout<<"bad = "<<bad<<endl;
            tot-=bad;
            //cout<<"total = "<<tot<<endl;
            c++;
            col[y]=1;
            cout<<tot<<" ";
        }
        else
        {
            cout<<tot<<" ";
        }

    }
    cout<<endl;
    return 0;
}

