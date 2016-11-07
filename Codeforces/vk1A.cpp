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

int main()
{
    ll n, c1=0, c2=0, c3=0, c4=0;
    cin>>n;
    ll s[n];
    for(ll i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]==1) c1++;
        if(s[i]==2) c2++;
        if(s[i]==3) c3++;
        if(s[i]==4) c4++;
    }
    ll ans = c4;
    if(c3<c1)
    {
        ans+=c3;
        c1-=c3;
    }
    else
    {
        ans+=c3;
        c1=0;
    }
    if(c2>1)
    {
        ans+=c2/2;
        c2=c2%2;
    }
    if(c1==0 && c2!=0)
    {
        ans+=c2/2;
        if(c2<2) ans+=1;
        else ans+=c2%2;
    }
    else if(c2==0 && c1 !=0)
    {
        ans+=c1/4;
        if(c1<4) ans+=1;
        else if(c1>4 && c1%4) ans+=1;
    }

    else if(c1/2==c2)
    {
        ans+=c1/2+c1%2;
    }
    else if(c1/2>c2)
    {
        ans+=1;
        c1-=2;
        c2=0;
        ans+=c1/4;
        if(c1<4) ans+=1;
        else if(c1>4 && c1%4) ans+=1;
    }
    else if(c1/2<c2)
    {
        ans+=1; // 1 hobe
    }

    cout<<ans<<endl;
    return 0;
}

