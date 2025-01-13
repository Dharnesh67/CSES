// https://codeforces.com/contest/2048/problem/C

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

ll fun(string &sub, string &s)
{
    ll j = sub.length() - 1, i = s.length() - 1;
    ll count = 0;
    while (j >= 0 && i >= 0) {
        if (sub[j] != s[i]) {
            count++;
        }
        j--;
        i--;
    }
    return count+i+1;
}
void solve()
{
    string s;
    cin >> s;
    ll n = s.length(), idx = -1;
    f(i, 0, n)
    {
        if (s[i] == '0')
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << 1 << " " << n << " " << 1 << " " << 1 << endl;
        return;
    }
    ll len = n - idx;
    ll start = -1;
    ll maxscore = LLONG_MIN;
    f(i, 0, n - len+1)
    {
        string sub = s.substr(i, len);
        ll count = fun(sub, s);
        if (count >=maxscore)
        {
        // cout<<"best-"+sub<<endl;
            start = i+1;
            maxscore = count;
        }
    }
    cout << start << " " << start+len-1 << " " << 1 << " " << n << endl;
    return;
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