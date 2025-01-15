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
    ll n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    vll v(n),copy(n);
    f(i, 0, n)
    {
        cin>>v[i];
        copy[i]=v[i];
    }
    sort(begin(v), end(v));
    ll start=-1,end=-1;
    f(i, 0, n)
    {
        ll j=i+1;
        ll k=n-1;
        while(j<=k){
            ll mid=(j+k)/2;
            ll sum=v[mid]+v[i];
            // cout<<sum<<" ";
            if(sum==x){
                start=v[i];
                end=v[mid];
                break;
            }else if(sum<x){
                j=mid+1;
            }else {
                k=mid-1;
            }
        }
        // cout<<endl;
    }
    if(start==-1) cout << "IMPOSSIBLE";
    else{
        ll idx1=-1,idx2=-1;
        f(i,0,n){
            if(copy[i]==start && idx1==-1){
                idx1=i;
            }
            else if(copy[i]==end && idx1!=i){
                idx2=i;
            }
            if(idx1!=-1 && idx2!=-1) break;
        }
        if(idx1>idx2) swap(idx1,idx2);
        cout<<idx1+1<<" "<<idx2+1;
    }

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