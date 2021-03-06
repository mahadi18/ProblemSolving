/*
https://branded.me/editor?id=56b2209a78fea5000fdab5a5
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
#define inf             1000000799852313 901800900 901800900
#define ull             unsigned long long

using namespace std;

int main()
{
    ll m, k, n, t;
    cin>>n>>m>>k;
    if(n%2==0)
    {
        cout<<"Marsel"<<endl;
        return 0;
    }
    else
    {
        ll square_root = (ll) sqrt(m) + 1;
        for ( ll i = 1; i < square_root; i++)
        {
            if (m % i == 0)
            {
                //cout << i << num/i << endl;
                if( (i>=k && i<m) || (m/i>=k && m/i<m) )
                {
                    cout<<"Timur"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"Marsel"<<endl;

    return 0;
}

