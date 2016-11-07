#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int f=0, im=0, ic=0, om=0, oc=0, w=0, wc=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            f = 1;
            oc = 0;
            ic = 0;
            w=0;
            continue;
        }
        else if(s[i]==')')
        {
            f=0;
            oc = 0;
            ic = 0;
            w=0;
            continue;
        }

        else if(f==0)
        {
            if(s[i]=='_')
            {
                om = max(om, oc);
                oc = 0;
            }
            else
                oc++;

            if(i+1==n || s[i+1]=='(' )
            {
                om = max(om, oc);
                oc = 0;
            }
        }

        else if(f==1)
        {
            if(w==0)
            {
                if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                {
                    wc++;
                    w=1;
                }
                else
                    w=0;
            }
            if(w==1)
            {
                if(s[i]=='_')
                {
                    w=0;
                }
            }
        }
    }
    cout<<om<<" "<<wc<<endl;
    return 0;
}
