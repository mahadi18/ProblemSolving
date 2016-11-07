#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<char>v;

int main()
{
    char c;
    ll cp=1, cm=0, f, t, r, pl=1, ms=1;
    while(1)
    {
        cin>>c;
        if(c=='=')
            break;
        v.push_back(c);
        if(c=='+') cp++;
        else if(c=='-') cm++;

    }
    //cout<<"cp = "<<cp<<"cm = "<<cm<<endl;
    ll n;
    cin>>n;

    if( (cp<=cm && (n<2 || v.size()<=3)) || (cp==1 && cm>cp) || ( cm>cp && (cm-cp*n)>n) || ( cp>cm && (cp-cm*n)>n)  )
    {
        cout<<"Impossible"<<endl;
        return 0;
    }

    else
    {
        cout<<"Possible"<<endl;



        if(cm==0 && cp==n)
        {
            for(ll i=0; i<v.size(); i++)
            {
                if(v[i]=='+' )
                    cout<<v[i]<<" ";
                else
                    cout<<"1 ";
            }
        }
        else if(cm==0 && cp==1)
        {
            cout<<n<<" ";
        }
        else if(cm==(cp-1))
        {
            f=n;
            cout<<f<<" ";
            cp--;
            for(ll i=1; i<v.size(); i++)
            {
                if(v[i]=='+' || v[i]=='-')
                    cout<<v[i]<<" 1 ";
            }
        }
        else if(cm>(cp-1) )
        {
            f=n;
            cout<<f<<" ";
            cp--;
            t=cm/cp;
            r=cm%cp;
            for(ll i=1; i<v.size(); i++)
            {
                if(v[i]=='-')
                    cout<<v[i]<<" 1 ";
                else if(v[i]=='+')
                {
                    if(cp==1)
                        t+=r;

                    cout<<v[i]<<" "<<t<<" ";
                    cp--;
                }
            }
        }
        else if(cm<cp)
        {
            f=n;
            cout<<f<<" ";
            cp--;
            t=cp/cm;
            r=cp%cm;
            for(ll i=1; i<v.size(); i++)
            {
                if(v[i]=='+')
                    cout<<v[i]<<" 1 ";
                else if(v[i]=='-')
                {
                    if(cm==1)
                        t+=r;

                    cout<<v[i]<<" "<<t<<" ";
                    cm--;
                }
            }
        }
    }
    cout<<"= "<<n<<endl;
    return 0;
}

/*

#include <climits>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <list>
#include <tuple>
#include <ctime>
#include <cassert>
using namespace std;


//type shortcuts
typedef long long ll;
typedef vector<ll> VI;
typedef long double DOUBLE;
typedef vector<DOUBLE> VD;
typedef vector<VD> VVD;


//constants
const DOUBLE EPS=1e-9;
const DOUBLE PI = atan(1) * 4;
const ll M = 1000000007;


#define Lvalue(i) ((v+Lcount-1-i)/Lcount)
#define Rvalue(i) ((v-n+Rcount-1-i)/Rcount)

int main()
{
    ll Lcount, Rcount;
    ll Llower, Lupper, Rlower, Rupper;
    ll n;

    Lcount=1;
    Rcount=0;
    vector<char> opr;
    while (true){
        char c;cin>>c;
        if (c=='?') continue;
        if (c=='=') {
            cin>>n;
            break;
        }
        opr.push_back(c);
        if (c=='+') ++Lcount; else ++Rcount;
    }

    Lupper = n*Lcount;
    Llower = Lcount;
    Rupper = n*Rcount+n;
    Rlower = Rcount+n;
    if (Lupper<Rlower||Rupper<Llower){
        cout<<"Impossible"<<endl;
        return 0;
    }
    cout<<"Possible"<<endl;
    ll v = max(Llower, Rlower);
    cout<<Lvalue(0)<<' ';
    ll li=1,ri=0;
    ll m=opr.size();
    for (ll i=0;i<m;++i){
        if (opr[i]=='+'){
            cout<<"+ "<<Lvalue(li)<<' ';
            ++li;
        }
        else {
            cout<<"- "<<Rvalue(ri)<<' ';
            ++ri;
        }
    }
    cout<<"= "<<n<<endl;
    return 0;
}

*/
