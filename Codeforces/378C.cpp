/*************** NOT DONE ************/

#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second

using namespace std;
deque<ll>q;
vector<ll>v;
pair<ll, char>p[10005];
ll ix=0, w=0;

ll check(ll st)
{
    if(q[st]>v[st])
    {
        cout<<"NO"<<endl;
        return 0;
    }

    if(q[st]==v[st])
    {
        ;
    }

    while(q[st]<v[st])
    {
        if(q[st]==v[st])
        {
            break;
        }

        else if(q[st] > q[st+1])
        {
            q[st] += q[st+1];
            p[ix].ff = 1;
            p[ix].ss = 'R';
            ix++;
            q.erase( q.begin()+(st+1) );
            if(q[st]>v[st])
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(q[st]==v[st])
            {
                break;
            }
        }

        else
        {
            for(ll i=1; i<q.size(); i++)
            {
                if(q[i] >= v[0])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if(q[i] > q[i-1])
                {
                    q[i] += q[i-1];
                    p[ix].ff = i+1;
                    p[ix].ss = 'L';
                    ix++;
                    q.erase(q.begin()+(i-1));
                    if(q[0]==v[0])
                    {
                        break;
                    }
                    else if( q[i] >= v[0] )
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
}

int main ()
{
    ll n, a;
    cin>>n;

    for (ll i=0; i<n; i++)
    {
        cin>>a;
        q.push_back(a);
    }

    ll k;
    cin>>k;
    for(ll i=0; i<k; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    //i=0;

    //for(ll i=0; i<q.size(); i++)



    if( --v.size())
    {
        if(q[1]>v[1])
        {
            cout<<"NO"<<endl;
            return 0;
        }


    }

//    q[4] = q[4]+q[5];
//    q.erase (q.begin()+5);
//
//    cout << "q contains:";
//    for ( deque<ll>::iterator it = q.begin(); it!=q.end(); ++it)
//        cout << ' ' << *it;
//    cout << '\n';

    return 0;
}
