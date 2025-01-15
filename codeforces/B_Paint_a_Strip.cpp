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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n <= 3)
    {
        cout << 2 << endl;
        return;
    }
    else
    {
        ll one = 4;
        ll r= 4;
        ll count=2;
        while (r < n)
        {
            r=(r+one+2);
            one=r;
            count++;
        }
        cout << count << endl;
        return;
    }
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