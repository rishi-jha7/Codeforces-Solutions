// Proble link: https://codeforces.com/contest/1945/problem/A

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin>>t;
    
    while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    
    if((b+c)%3 > c) cout<<"-1"<<endl;

    else {
    ll x = (b+c)/3;
    if((b+c)%3==0)
    cout<<a+x<<endl;
    else
    cout<<a+x+1<<endl;
    }
    }
}