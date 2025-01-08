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

void fun(ll n ,ll from,ll to,ll mid,vector<pair<int,int>>&ans,ll &count){
    if(n==0){
        return;
    }
    fun(n-1,from,mid,to,ans,count);
    count++;
    ans.push_back({from,to});
    // cout<<from<<" "<<to<<endl;
    fun(n-1,mid,to,from,ans,count);
}
void solve()
{
    ll n,count=0;
    cin>>n;
    vector<pair<int,int>>ans;
    fun(n,1,3,2,ans,count);
    cout<<count<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
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