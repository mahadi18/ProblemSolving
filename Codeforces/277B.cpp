#include<bits/stdc++.h>
using namespace std;
int a[105][105], b[105][105], c[105][105];

int main()
{
    int n, m;
    bool bul = true;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            bul = true;
            for(int k=1; k<=m; k++)
            {
                if(a[i][k]==0)
                {
                    b[i][j]=0;
                    bul = false;
                    break;
                }
            }
            if(bul)
                for(int k=1; k<=n; k++)
                {
                    if(a[k][j]==0)
                    {
                        b[i][j]=0;
                        bul = false;
                        break;
                    }
                }
            if(bul)b[i][j] = 1;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            bul = true;
            for(int k=1; k<=m; k++)
            {
                if(b[i][k]==1)
                {
                    c[i][j]=1;
                    bul = false;
                    break;
                }
            }
            if(bul)
                for(int k=1; k<=n; k++)
                {
                    if(b[k][j]==1)
                    {
                        c[i][j]=1;
                        bul = false;
                        break;
                    }
                }
            if(bul)c[i][j] = 0;
        }
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i][j] != c[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
