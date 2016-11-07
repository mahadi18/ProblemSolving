#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int st=-1, en=0, d=0, mx=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U' ||s[i]=='Y')
        {
            en = i;
            d = en - st;
            mx = max(mx, d);
            st = i;
        }
    }

    d = s.length() - st;
    mx = max(mx, d);
    cout<<mx<<endl;
    return 0;
}
