#include<bits/stdc++.h>
using namespace std;

vector<long>v[105];

int main()
{

    long n, k;
    cin>>n>>k;

    long c[n+5][k+5];
    memset(c, 0, sizeof(c));

    long maxi[k+5];
    memset(maxi, 0, sizeof(maxi));

    long a[n+5];
    for(long i=0; i<n; i++)
        cin>>a[i];

    for(long i=0; i<n; i++)
    {
        long p = a[i];
        while(p)
        {
            for(long j=0; j<k; j++)
            {
                if(p==0) break;
                c[i][j]++;

                maxi[j] =  max(maxi[j], c[i][j]);

                v[i].push_back(j+1);
                p--;
            }
        }

        if(i>0)
        {
            for(long j=0; j<k; j++)
            {
                //cout<<"c ["<<i<<"]["<<j<<"] - c ["<<i-1<<"]["<<j<<"] = "<<abs(c[i][j] - c[i-1][j])<<endl;
                if( abs(maxi[j] - c[i][j]) > 1 )
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }


    cout<<"YES"<<endl;
    for(long i=0; i<n; i++)
    {
        for(long j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
