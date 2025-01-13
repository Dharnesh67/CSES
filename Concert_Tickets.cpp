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

void find(ll &t, vll &h)
{
    auto x= upper_bound(h.begin(),h.end(),t);
    if(x==h.begin()){
        cout<<-1<<endl;
    }
    else {
        --x;
        cout << *x << endl;
        h.erase(x); 
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vll h(n), t(m);
    f(i, 0, n) cin >> h[i];
    f(i, 0, m) cin >> t[i];
    sort(begin(h), end(h));
    f(i, 0, m)
    {
        find(t[i], h);
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