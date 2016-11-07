#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff first
#define ss second

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    pair<string, int>p[7];
    p[0].ff = "monday";     p[0].ss = 1;
    p[1].ff = "tuesday";    p[1].ss = 2;
    p[2].ff = "wednesday";  p[2].ss = 3;
    p[3].ff = "thursday";   p[3].ss = 4;
    p[4].ff = "friday";     p[4].ss = 5;
    p[5].ff = "saturday";   p[5].ss = 6;
    p[6].ff = "sunday";     p[6].ss = 7;

    for(int i=1; i<12; i++)
    {
        int n;
        if(i==1) n=31;
        else if(i==2) n=28;
        else if(i==3) n=31;
        else if(i==4) n=30;
        else if(i==5) n=31;
        else if(i==6) n=30;
        else if(i==7) n=31;
        else if(i==8) n=31;
        else if(i==9) n=30;
        else if(i==10) n=31;
        else if(i==11) n=30;

        int a, b;
        for(int j=0; j<7; j++)
        {
            if(s1==p[j].ff)
            {
                a=p[j].ss;
                break;
            }
        }

        for(int j=0; j<7; j++)
        {
            if(s2==p[j].ff)
            {
                b=p[j].ss;
                break;
            }
        }

        int d = b-a;
        if(d<0) d += 7;
        if(d==0) d = 7;
        int k=1;
        while(k < n)
        {
            k+=7;
        }

        if(k+d-7 == n+1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
