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

ll integer(string s)
{
    ll ans = 0;
    for (auto c : s)
        ans += (c - '0');
    return ans;
}
void solve()
{
    string s;
    cin >> s;
    if (integer(s) % 9 == 0)
    {
        cout <<"YES" << endl;
        return;
    }
    queue<string> q;
    unordered_set<string>st;
    q.push(s);
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        if(st.count(x)) continue;
        st.insert(x);
        if (integer(x) % 9 == 0)
        {
            cout << "YES" << endl;
            return;
        }
        for (int i = 0; i < x.size(); i++)
        {
            char c = x[i];
            int val = c - '0';
            if(val==1)  continue;
            int sq = val * val;
            if (sq > 9 )
            {
                continue;
            }
            else
            {
                string temp=x;
                temp[i]=sq+'0';
                q.push(temp);
            }
        }
    }
    cout << "NO" << endl;
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