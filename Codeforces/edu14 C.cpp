#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    double n;
    ll c=0;
    cin>>n;
    if(n>=1 && n<10)
    {
        cout<<n<<endl;
    }
    else if(n>=10)
    {
        while(n>=10)
        {
            c++;
            n/=10;
        }
        cout<<n<<"E"<<c<<endl;
    }
    else if(n<1)
    {
        while(n<1)
        {
            c++;
            n=n*10;
        }
        cout<<n<<"E"<<-c<<endl;
    }
    return 0;
}
