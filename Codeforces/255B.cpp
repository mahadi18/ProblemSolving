#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string al = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    ll k, mx=0, ix=0, sum=0;
    string g;
    cin>>g;
    cin>>k;
    ll w[30];
    for(ll i=0; i<26; i++)
    {
        cin>>w[i];
        mx = max(mx, w[i]);
    }
    for(ll i=0; i<g.length(); i++)
    {
             if(g[i]=='a') ix=0;
        else if(g[i]=='b') ix=1;
        else if(g[i]=='c') ix=2;
        else if(g[i]=='d') ix=3;
        else if(g[i]=='e') ix=4;
        else if(g[i]=='f') ix=5;
        else if(g[i]=='g') ix=6;
        else if(g[i]=='h') ix=7;
        else if(g[i]=='i') ix=8;
        else if(g[i]=='j') ix=9;
        else if(g[i]=='k') ix=10;
        else if(g[i]=='l') ix=11;
        else if(g[i]=='m') ix=12;
        else if(g[i]=='n') ix=13;
        else if(g[i]=='o') ix=14;
        else if(g[i]=='p') ix=15;
        else if(g[i]=='q') ix=16;
        else if(g[i]=='r') ix=17;
        else if(g[i]=='s') ix=18;
        else if(g[i]=='t') ix=19;
        else if(g[i]=='u') ix=20;
        else if(g[i]=='v') ix=21;
        else if(g[i]=='w') ix=22;
        else if(g[i]=='x') ix=23;
        else if(g[i]=='y') ix=24;
        else if(g[i]=='z') ix=25;

        sum += ( w[ix]*(i+1) );

    }
    ll l = g.length();
    while(k--)
    {
        l++;
        sum += (mx*l);
    }
    cout<<sum<<endl;
    return 0;
}
