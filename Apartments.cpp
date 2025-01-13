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
    ll n, m, k;
    cin >> n >> m >> k;
    vll v(n);
    f(i, 0, n) cin >> v[i];
    vll appsize(m);
    f(i,0,m) cin>>appsize[i];
    sort(begin(appsize),end(appsize));
    sort(begin(v),end(v));
    ll ans=0; ll j =0,i=0;
    while(i<n && j<m){
        if(appsize[j]>=v[i]-k && appsize[j]<=v[i]+k){
            ans++;
            i++;
            j++;
        }else if((v[i]-k)>appsize[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
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