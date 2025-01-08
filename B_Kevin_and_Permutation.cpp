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
    vll v(n),vis(n+1,0);
    ll i=k-1,j=1;
    while(i<n){
        v[i]=j;
        vis[j]=1;
        i+=k;
        j++;
    }
    j=1;
    f(i,0,n){
        if(v[i]!=0){
            continue;
        }
        else{
            while(vis[j] && j<n+1){
                j++;
            }
            vis[j]=1;
            v[i]=j;
        }
    }
    f(i,0,n){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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