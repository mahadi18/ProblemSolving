#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    scanf("%I64d", &n);
    ll a, x;
    for(ll j=0; j<n; j++)
    {
        bool l = true;
        scanf("%I64d", &a);
        x = sqrt(a);
        if(x*x != a || a==1)
        {
            printf("NO\n");
            continue;
        }
        else if(x*x==a)
        {
            for(ll i=2; i*i<=x; i++)
            {
                if(a%i==0)
                {
                    printf("NO\n");
                    l = false;
                    break;
                }
            }
            if(l)
                printf("YES\n");
            continue;
        }
    }
    return 0;
}
