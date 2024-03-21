// Problem link: https://codeforces.com/problemset/problem/1857/A

#include<bits/stdc++.h>
using namespace std;

// #define long long ll

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd_cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        for(int i=0;i<n;i++)
        if(a[i]%2 == 1)
        odd_cnt++;

        if(odd_cnt%2 == 0)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}