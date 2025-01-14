#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define mii map<int, int>
#define msi map<string, int>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define pb push_back
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vvll v;
    f(i, 0, n)
    {
        ll a, b;
        cin >> a >> b;
        v.pb({a, 1});
        v.pb({b, -1});
    }
    sort(begin(v), end(v), [](vll &a, vll &b)
         { 
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0] < b[0]; });
    ll maxcount = 0;
    ll count = 0;
    f(i, 0, v.size())
    {
        count += v[i][1];
        maxcount = max(count, maxcount);
    }
    cout << maxcount;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}