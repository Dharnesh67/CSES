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
    if(n==0){
        cout<<0<<" "<<0;
        return;
    }
    vll v(n);
    f(i, 0, n) cin >> v[i];
    sort(begin(v), end(v));
    ll left = 0,ans=0;
    ll i = 0, val = v[0];
    while (v[i] == val)
        i++;
    left = i;
    i = n - 1;val = v[n - 1];ll right=0;
    while (v[i] == val)
    {
        i--;
        right++;
    }
    if(v[0]==v[n-1]){
        cout<<0<<" "<<(n*(n-1))/2;
        return;
    }
    // cout<<left<<" "<<right<<endl;
    cout<<v[n-1]-v[0]<<" ";
    cout<<left*right;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}