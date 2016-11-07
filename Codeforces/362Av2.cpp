#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, s, x;
    bool B = true;
    scanf("%I64d %I64d %I64d", &t, &s, &x);
    if(t==x)
    {
        printf("YES\n");
    }
    else
    {
        ll n=1;
        while(x >= (t+n*s) )
        {
            if( (t+n*s)==x)
            {
                printf("YES\n");
                B = false;
                break;
            }
            else if( (t+n*s+1)==x )
            {
                printf("YES\n");
                B = false;
                break;
            }
            n++;
        }

        if(B) printf("NO\n");
    }
    return 0;
}
