#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    bool b = true;
    for(int i=1; i>0; )
    {
        if(b)
        {
            cout<<i<<endl<<i+1<<endl;
            if(i==9)
            {
                i-=2;
                b = false;
                //cout<<" here i = "<<i<<endl;
                //cout<<endl<<"sesh"<<endl;
            }
            i+=2;
        }
        else
        {
            cout<<i<<endl<<i-1<<endl;
            i-=2;
        }
    }
    return 0;
}
