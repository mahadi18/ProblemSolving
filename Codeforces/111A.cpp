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
    int n, sum=0, half=0, c=0, tk=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    half = sum/2;
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        tk+=a[i];
        c++;
        if(tk>half)
            break;
    }
    cout<<c<<endl;
    return 0;
}

