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
    ll n,k;
    cin>>n>>k;
    vll v(n);
    f(i,0,n) cin>>v[i];
    sort(begin(v),end(v));
    ll i=0,j=n-1,count=0;
    while(i<=j){
        if(v[i]+v[j]<=k){
            j--;
            i++;
        }else{
            j--;
        }
        count++;
    }
    cout<<count<<endl;
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