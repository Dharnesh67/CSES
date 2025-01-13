// https://codeforces.com/contest/2055/problem/C

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
    string path;
    cin >> path;
    ll siz = path.size();
    vvll grid(n, vll(m));
    vll rowsum(n), colsum(m);
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            cin >> grid[i][j];
            rowsum[i] += grid[i][j];
            colsum[j] += grid[i][j];
        }
    }
    ll i = 0, j = 0, k = 0;
    while (k <=siz)
    {
        if (path[k] == 'D')
        {
            grid[i][j] = -rowsum[i];
            colsum[j] += (-rowsum[i]);
            rowsum[i] = 0;
            i++;
        }
        else
        {
            grid[i][j] = -colsum[j];
            rowsum[i] += (-colsum[j]);
            colsum[j] = 0;
            j++;
        }
        k++;
    }
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            cout << grid[i][j]<<" ";
            
        }
        cout<<endl;
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