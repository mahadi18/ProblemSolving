#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int mx=0;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


int main()
{
    int n;
    cin>>n;
    //string dummy;
    //getline(cin, dummy);
    getchar();
    while(n--)
    {
        string s;
        getline(cin, s);
        //istringstream iss (s);
        stringstream ss(s);
        int num;
        while(ss>>num)
            v.push_back(num);
        int sp=0;
        /*for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ') sp++;
        }

        for (int n=0; n<sp+1; n++)
        {
            int val;
            iss >> val;
            v.push_back(val);
        }*/

        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                //if(i==j) continue;
                int ret = gcd(v[i], v[j]);
                if(ret>mx) mx = ret;
            }
        }

        cout<<mx<<endl;
        mx=0;
        v.clear();
        s.clear();
    }
    return 0;
}
