#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll l = s.length(); //cout<<l<<endl;

    if((l%2)==1)
        if(s[(l-1)/2]!='o'&&s[(l-1)/2]!='v'&&s[(l-1)/2]!='w'&&s[(l-1)/2]!='x'&&s[(l-1)/2]!='A'&&s[(l-1)/2]!='H'&&s[(l-1)/2]!='I'&&s[(l-1)/2]!='M'&&s[(l-1)/2]!='O'&&s[(l-1)/2]!='T'&&s[(l-1)/2]!='U'&&s[(l-1)/2]!='V'&&s[(l-1)/2]!='W'&&s[(l-1)/2]!='X'&&s[(l-1)/2]!='Y')
        {
            cout<<"NIE"<<endl;
            return 0;
        }

    for(ll i=0; i<(l-1/2); i++)
    {
        if(s[i]=='b'&&s[l-1-i]=='d'|| s[i]=='d'&&s[l-1-i]=='b'||s[i]=='o'&&s[l-1-i]=='o'||s[i]=='p'&&s[l-1-i]=='q'||s[i]=='q'&&s[l-1-i]=='p'||s[i]=='v'&&s[l-1-i]=='v'||s[i]=='w'&&s[l-1-i]=='w'||s[i]=='x'&&s[l-1-i]=='x'||s[i]=='A'&&s[l-1-i]=='A'||s[i]=='H'&&s[l-1-i]=='H'||s[i]=='I'&&s[l-1-i]=='I'||s[i]=='M'&&s[l-1-i]=='M'||s[i]=='O'&&s[l-1-i]=='O'||s[i]=='T'&&s[l-1-i]=='T'||s[i]=='U'&&s[l-1-i]=='U'||s[i]=='V'&&s[l-1-i]=='V'||s[i]=='W'&&s[l-1-i]=='W'||s[i]=='X'&&s[l-1-i]=='X'||s[i]=='Y'&&s[l-1-i]=='Y')
        {
            continue;
        }
        else
        {
            cout<<"NIE"<<endl;
            return 0;
        }
    }
    cout<<"TAK"<<endl;

    return 0;
}
