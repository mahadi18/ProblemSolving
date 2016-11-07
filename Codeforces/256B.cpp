#include<bits/stdc++.h>
using namespace std;
int sa[1000], ta[1000];
string s,t;

bool automaton()
{
   bool b=false;
    int j=0, c=0;
    for(int i=0; i<t.length(); i++)
    {
        for( ; j<s.length(); j++)
        {
            if(ta[i]==sa[j])
            {
                b = true;
                j++; c++;
                break;
            }

        }
        if(s.length() != t.length() && j>=s.length() && i<t.length() && c!=t.length())
            goto H;

    }
    if(c==t.length()) return true;
H:
    ;
    return false;
}

bool sarray()
{
    sort(sa, sa+s.length());
    sort(ta, ta+t.length());

    return automaton();
}

int main()
{
    int c[1000], ch;
    cin>>s>>t;
    int p;
    c['a'] = 1;
    c['b'] = 2;
    c['c'] = 3;
    c['d'] = 4;
    c['e'] = 5;
    c['f'] = 6;
    c['g'] = 7;
    c['h'] = 8;
    c['i'] = 9;
    c['j'] = 10;
    c['k'] = 11;
    c['l'] = 12;
    c['m'] = 13;
    c['n'] = 14;
    c['o'] = 15;
    c['p'] = 16;
    c['q'] = 17;
    c['r'] = 18;
    c['s'] = 19;
    c['t'] = 20;
    c['u'] = 21;
    c['v'] = 22;
    c['w'] = 23;
    c['x'] = 24;
    c['y'] = 25;
    c['z'] = 26;

    for(int i=0; i<s.length(); i++)
    {
        sa[i] = c[s[i]];
    }
    for(int i=0; i<t.length(); i++)
    {
        ta[i] = c[t[i]];
    }

    if(s.length()<t.length())
    {
        cout<<"need tree"<<endl;
        return 0;
    }
    bool a = false, v = automaton();
    if(s.length()>t.length() && v)
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    else if(s.length()>t.length() && !v)
    {
        a = sarray();
        if(!a)
        {
            cout<<"need tree"<<endl;
            return 0;
        }
        else if(a)
        {
            cout<<"both"<<endl;
            return 0;
        }

    }
    v = sarray();
    if(s.length()==t.length() && v)
    {
        cout<<"array"<<endl;
        return 0;
    }

    cout<<"need tree"<<endl;

    return 0;
}
