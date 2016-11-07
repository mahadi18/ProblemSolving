#include<bits/stdc++.h>
using namespace std;
int ar1[1005];
int n;
int m;
int f1(int a,int b)
{
    if(a==b)
        return a;
    int c,d,i,k,l;
    c=(a+b)/2;
    l=1;
    k=0;
    for(i=0;i<n;i++)
    {
        if(ar1[i]+k<=c)
        {
            k+=ar1[i];
        }
        else
        {
            l++;
            k=ar1[i];
        }
        if(l>m)
            break;
    }
    if(l>m)
    {
        if(a+1==b)
            return b;
        else
            return f1(c,b);
    }
    else
    {
        if(a+1==b)
            return a;
        else
            return f1(a,c);
    }
}
int main()
{
    int a1,i1=0;
    cin>>a1;
    while(i1<a1)
    {
        i1++;
        int a,b,i,k;
        cin>>n>>m;
        a=-1;
        b=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar1[i]);
            if(ar1[i]>a)
                a=ar1[i];
            b+=ar1[i];
        }
        k=f1(a,b);
        printf("Case %d: %d\n",i1,k);
    }
    return 0;
}
