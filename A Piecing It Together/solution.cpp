#include <bits/stdc++.h>
using namespace std;
 
#define md 1000000007
#define pb push_back
#define endl "\n"
#define F first
#define S second
#define sz(x) (int)(x).size()
#define inp(v)        \
    for (auto &x : v) \
    cin >> x
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define Jai_Shree_Ram               \
    cin.tie(0)->sync_with_stdio(0); \
    cin.exceptions(cin.failbit);
#define yes                    \
    {                          \
        cout << "Yes" << endl; \
        return;                \
    }
#define no                    \
    {                         \
        cout << "No" << endl; \
        return;               \
    }
#define YES                    \
    {                          \
        cout << "Yes" << endl; \
    }
#define NO                    \
    {                         \
        cout << "No" << endl; \
    }
#define nyet                  \
    {                         \
        cout << "-1" << endl; \
        return;               \
    }
 
using ll = long long;
using ull = unsigned long long;
using lld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vl = vector<ll>;
using vi = vector<int>;
 
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int hp = power(a, b / 2);
    if (b % 2 == 0)
        return hp * hp;
    else
        return hp * hp * a;
}
 
void solve()
{
    cout << "puzzling";
}
 
int main()
{
    Jai_Shree_Ram;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}