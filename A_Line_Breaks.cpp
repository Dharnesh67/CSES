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
    ll n, m;
    cin >> n >> m;
    // vll vis(n,0);
    ll ans = 0;
    vector<string>s;
    f(i, 0, n)
    {
        string a;
        cin >> a;
        s.pb(a);
    }
    f(i, 0, n)
    {
      if(m>=s[i].length()){
        m-=s[i].length();
        ans++;
      }else{
        break;
      }
    }
    cout<<ans<<endl;
    // cout<<fun(vis,s,m)<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}