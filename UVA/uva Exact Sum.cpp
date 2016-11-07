/*
         +-+ +-+ +-+ +-+ +-+ +-+
         |M| |A| |H| |A| |D| |I|
         +-+ +-+ +-+ +-+ +-+ +-+
 */

#include <bits/stdc++.h>

#define pii             pair <int,int>
#define pll             pair <long long int, long long int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             10000
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d: ",z)
#define CASE_PRINT      cout<<"Case "<<z<<": ";
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long

using namespace std;
ll a[10002];
ll mn = 99999, r, m, n;
ll fuu(ll i, ll x)
{
    if(i==n-1) return 0;

    for(ll j=i+1; j<n; j++)
    {
        if(a[i]+a[j]==x)
        {
            if(a[j]-a[i]<mn) {r=a[i]; m=a[j]; mn = a[j]-a[i];}
            break;
        }
    }
    fuu(i+1, x);
}
int main()
{
    while(scanf("%lld", &n) !=EOF)
    {
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ll x;
        cin>>x;
        fuu(0, x);
        cout<<"Peter should buy books whose prices are "<<r<<" and "<<m<<"."<<endl<<endl;
        mn=99999999;
    }
    return 0;
}
