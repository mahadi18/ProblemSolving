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
vector<ll>v;
pair<ll,ll>p[1000];

ll srch(ll id)
{
    ll Beg=0, End=v.size() - 1, Mid;
    while(Beg<=End)
    {
        Mid = (Beg+End)/2;
        if(v[Mid]==id) return (Mid+1);
        else if(id > v[Mid]){ Beg = Mid+1; }
        else if(id < v[Mid]){ End = Mid-1; }
    }
    return -1;
}

int main()
{
    ll n,k,q, c=0;
    cin>>n>>k>>q;
    ll f[n];
    for(ll i=0; i<n; i++)
        cin>>f[i];
    while(q--)
    {
        ll typ, id, i=0;
        cin>>typ>>id;
        if(typ==1)
        {
            v.push_back(id);
            p[i].ff=f[i];
            p[i].ss=id;
            c++;
        }
        else
        {
            if( v.size() == 0 )
            {
                cout<<"NO"<<endl;
                goto KUET;
            }

            else if( srch(id) == -1 )
            {
                cout<<"NO"<<endl;
                goto KUET;
            }
            else
            {
                if(v.size()<=k)
                {
                    cout<<"YES"<<endl;
                    goto KUET;
                }
                else
                {
                    sort(p,p+c);
                    for(ll j=c-1; j>=0,k!=0; j--,k--)
                    {
                        if(p[j].ss == srch(id) )
                        {
                            cout<<"YES"<<endl;
                            goto KUET;
                        }
                    }
                    cout<<"NO"<<endl;
                }
            }

        }
KUET:
        ;
    }

    return 0;
}

