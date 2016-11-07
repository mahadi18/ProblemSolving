#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin>>n>>m;
    string s1[m+1], s2[m+1], ls[n+1];
    ll a[m+1];
    for(ll i=0; i<m; i++)
    {
        cin>>s1[i]>>s2[i];
    }

    for(ll i=0; i<n; i++)
    {
        cin>>ls[i];
    }

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(( ls[i].length() != s1[j].length() )) continue;

            for(ll k=0; k<ls[i].length(); k++)
            {
                if(ls[i][k] != s1[j][k]) goto OUT;
            }

            if(s1[j].length() <= s2[j].length()) cout<<s1[j]<<" ";
            else cout<<s2[j]<<" ";
            break;
OUT:
            ;
        }

    }

    return 0;
}
