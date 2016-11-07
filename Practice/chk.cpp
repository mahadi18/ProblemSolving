#include<bits/stdc++.h>
#define ll long long
#define sf scanf
#define pf printf
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[51],b[51];
    for(int i=0; i<(n*n); i++)
    {
        cin>>a[i]>>b[i];
    }
    vector<int>h;
    vector<int>v;
    int flag=0,cnt=0;
    for(int i=0; i<(n*n); i++)
    {
        if(i==0)
        {
            h.push_back(a[i]);
            v.push_back(b[i]);
            cout<<"1"<<" ";
            continue;
        }
        else if(i!=0)
        {
            for(int j=h.size()-1; j>=0; j--)
            {
                if(a[i]==h[j])flag=1;
                if(b[i]==v[j])cnt=1;
            }
        }
        if(flag==1 || cnt==1)
        {
            flag=0;
            cnt=0;
        }
        else
        {
            h.push_back(a[i]);
            v.push_back(b[i]);
            cout<<i+1<<" ";
            flag=0;
            cnt=0;
        }
    }



}
