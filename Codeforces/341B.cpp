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

map<ll, ll>add;
map<ll, ll>sub;

int main()
{
    ll n, x, y, maxa=0, maxs=0, mina=999999999999999, mins=999999999999999, c=0;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>x>>y;
        if(x+y>maxa) maxa=x+y;
        if(x+y<mina) mina=x+y;

        if(x-y>maxs) maxs=x-y;
        if(x-y<mins) mins=x-y;


        add[x+y]++;
        sub[x-y]++;
    }

    for(ll i=mina; i<=maxa; i++)
    {
        if(add[i]>1) c+=(add[i]*(add[i]-1))/2;
    }

    for(ll i=mins; i<=maxs; i++)
    {
        if(sub[i]>1) c+=(sub[i]*(sub[i]-1))/2;
    }

    cout<<c<<endl;
    return 0;
}

/*
5
1 1
1 5
3 3
5 1
5 5



*/
