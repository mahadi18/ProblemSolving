#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

typedef pair<int, int> pii;

vector<pii>v;

bool cmp(pii a, pii b)
{
    return a.ss*b.ff > a.ff*b.ss;
}

void factorialKnapsack()
{
    int n, w;
    cout<<"Enter number of items: ";
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int weight, price;
        printf("Enter weight[%d] then price[%d] : ", i, i);
        scanf("%d%d", &weight, &price);
        v.push_back(pii(weight, price));
    }
    sort(v.begin(), v.end(), cmp);
    cout<<"Enter maximum capacity : ";
    scanf("%d", &w);
    int ans =0;
    for(int i=0; i<n; i++)
    {
        int z = min(w, v[i].ff);
        w -= z;
        ans += z*v[i].ss;
    }
    printf("Maximum cost =  %d", ans);
    cout<<endl;
}

int main()
{
    factorialKnapsack();
    return 0;
}
