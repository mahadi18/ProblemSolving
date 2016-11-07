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
    ll n=0, f=0;
    string s;
    cin>>s;
    ll l=s.length();

    stringstream ss;
    ss<<s;
    ss>>n;

    ll ans =0;

    if(s[l-1]=='f') ans = 1;
    else if(s[l-1]=='e') ans = 2;
    else if(s[l-1]=='d') ans = 3;
    else if(s[l-1]=='a') ans = 4;
    else if(s[l-1]=='b') ans = 5;
    else if(s[l-1]=='c') ans = 6;


    if(n<3)
    {
        if(n==2) ans += 7;
    }

    else
    {
        if((n-1)%4<2)
        {
            f = (n-1)/4;
            if((n-1)%4==1) ans += 7;
        }
        else
        {
            f = (n-3)/4;
            if((n-3)%4==1) ans += 7;
        }

        ans = ans + (f*16);
    }

    cout<<ans<<endl;
    return 0;
}


