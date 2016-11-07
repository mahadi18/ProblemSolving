#include<bits/stdc++.h>
using namespace std;


int dp[200][101];
int ar1[200][101];
int k,n;

int f1(int i,int j)
{
    if(i>=0 && i<k && j>=0 && ar1[i][j]!=-2)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        int r=-10;
        if(i<n-1)
        {
            r=max(r,ar1[i][j]+f1(i+1,j));
            r=max(r,ar1[i][j]+f1(i+1,j+1));
            return dp[i][j]=r;
        }
        else
        {
            r=max(r,ar1[i][j]+f1(i+1,j));
            r=max(r,ar1[i][j]+f1(i+1,j-1));
            return dp[i][j]=r;
        }
    }
    else
        return 0;
}

int main()
{
    int i,j,a1,i1=0;
    cin>>a1;
    while(i1<a1)
    {
        i1++;
        for(i=0; i<200; i++)
        {
            for(j=0; j<101; j++)
                dp[i][j]=-1;
        }
        cin>>n;
        k=(n*2)-1;
        for(i=0; i<k; i++)
        {
            if(i<n)
            {
                for(j=0; j<=i; j++)
                    cin>>ar1[i][j];
            }
            else
            {
                for(j=0; j<k-i; j++)
                    cin>>ar1[i][j];
            }
            ar1[i][j]=-2;
        }
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<k; j++)
                cout<<ar1[i][j]<<" ";
            cout<<endl;
        }

        printf("Case %d: %d\n",i1,f1(0,0));
    }
    return 0;
}
