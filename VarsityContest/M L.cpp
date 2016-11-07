#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll T;
    cin>>T;
    for(ll t=0; t<T; t++)
    {
        ll q, c=0;
        cin>>q;
        if(q%2==1)
        {
            cout<<"First Box"<<endl;
        }
        else
        {
            while(q%2==0)
            {
                c++;
                q/=2;
            }
            if(c%2==1) cout<<"Second Box"<<endl;
            else cout<<"First Box"<<endl;

        }
    }
    return 0;
}
