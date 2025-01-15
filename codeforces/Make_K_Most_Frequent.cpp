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
    ll n, k;
    cin >> n >> k;
    vll v(n);
    unordered_map<ll, ll> mp;
    // ll count=0;
    f(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
        // if(maxcount<mp[v[i]] || (maxcount<=mp[v[i]] && v[i]==k)){
        //     maxcount=mp[v[i]];
        //     ele=v[i];
        // }
        // if(v[i]==k) count++;
    }
    // if(ele==k){
    //     cout<<0<<endl;
    // }
    ll i = 0, j = n - 1;
    ll maxi = -1;
    ll count = 0;
    while (true && i < j)
    {
        for (auto &x : mp)
        {
            maxi = max(x.second, maxi);
        }
        if (maxi == mp[k])
        {
            break;
        }
        i++;
        mp[v[i]]--;
        count++;
        for (auto &x : mp)
        {
            maxi = max(x.second, maxi);
        }
        if (maxi == mp[k])
        {
            break;
        }
        if (v[j] != k)
        {
            j--;
            mp[v[j]]--;
            count++;
        }
    }
    cout << count << endl;
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