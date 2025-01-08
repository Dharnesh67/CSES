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

void fun(string &a, int r, int l, set<string> &ans)
{
    if (l == r)
    {
        ans.insert(a);
        return;
    }
    for (int j = l; j <=r; j++)
    {
        
            swap(a[l], a[j]);
            fun(a, r, l + 1, ans);
            swap(a[l], a[j]);
        
    }
}
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    set<string> ans;
    fun(s, n-1, 0, ans);
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << endl;
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