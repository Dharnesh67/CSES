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
    vll v(n);
    f(i, 0, n) cin >> v[i];
    map<ll, vll> mp;
    f(i, 0, n)
    {
        mp[v[i]].pb(i + 1);
    }
    vvll ans;
    for (auto p : mp)
    {
        ll x = p.first;
        if (p.second.size() == 1)
        {
            ans.push_back({x, 0});
            continue;
        }
        bool flag = true;ll diff=p.second[1]-p.second[0];
        f(i,1,p.second.size()){
            if(diff!=p.second[i]-p.second[i-1]){
                flag=false;
                break;
            }
        }
        if(flag){
            ans.push_back({x, diff});
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
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