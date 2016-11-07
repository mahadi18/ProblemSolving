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
    int n, l, sp, t=1, m=0, r, q=1;
    cin>>n;

    l=n*2+1;
    sp=n*2;
    int ps=2;

    for(int i=0; i<l; i++)
    {
        if(i==n)
        {
            t=1;
            for(int j=0; j<l; j++)
            {
                if(j<=n)
                {
                    cout<<j;
                }
                else
                {
                    cout<<j-t*2;
                    t++;
                }
                if(j!=l-1) cout<<" ";
            }
        }

        else if(i<n)
        {
            for(int k=0; k<sp; k++)
                cout<<" ";
            sp-=2;
            t=1;
            for(int j=0; j<2*m+1; j++)
            {
                if(j<=m)
                {
                    cout<<j;
                }
                else
                {
                    cout<<j-t*2;
                    t++;
                }
                if(j!=2*m) cout<<" ";
            }
            m++;
        }

        else if(i>n)
        {
            for(int k=0; k<ps; k++)
                cout<<" ";
            ps+=2;
            r=i-q*2;
            t=1;
            q++;
            for(int j=0; j<2*r+1; j++)
            {
                if(j<=r)
                {
                    cout<<j;
                }
                else
                {
                    cout<<j-t*2;
                    t++;
                }
                if(j!=2*r) cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}


