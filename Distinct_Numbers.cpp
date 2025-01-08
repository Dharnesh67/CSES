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
    cin>>n;
    vll v(n);
    f(i,0,n) cin>>v[i];
    sort(begin(v),end(v));
    ll ans=(v.size()>0?1:0);
    f(i,1,n) ans+=(v[i]!=v[i-1]);
    cout<<ans;
}
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}