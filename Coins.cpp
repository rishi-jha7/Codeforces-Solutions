// Problem link: https://codeforces.com/problemset/problem/1814/A

#include<bits/stdc++.h>
using namespace std;

// #define long long ll

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       long long int n,k;
       cin>>n>>k;
       if(n%2 == 0  ||  k%2 == 1)
       cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}