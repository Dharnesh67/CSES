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
    ll n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vll v(n, -1);
    if (n % 2 == 0)
    {
        f(i, 0, n)
        {
            cout << i % 2 << " ";
        }
        cout << endl;
        return;
    }
    if (x == 0 && y == n - 1)
    {
        f(i, 0, n-1)
        {
            cout << i % 2 << " ";
        }
        cout<<2<<endl;                            
        return;
    }
    else
    {
        ll prev = (x == 0) ? n - 1 : x - 1;
        ll next = (y == n - 1) ? 0 : y + 1;
        v[x] = 1;
        v[next] = 0;
        v[prev] = 2;
    }
    f(i, 0, n)
    {
        if (v[i] != -1)
        {
            continue;
        }
        ll prev = (i == 0) ? n - 1 : i - 1;
        if (v[prev] == 2 || v[prev] == 0)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }

    cout << endl;
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