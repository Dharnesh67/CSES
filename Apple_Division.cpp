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

void fun(ll n,vector<string> &ans,string temp)
{
    if(n==0){
        bool flag=true;
        // f(i,0,temp.length()-1){
        //     if(temp[i]!=temp[i+1]){
        //         flag=true;
        //         break;
        //     }
        // }
        if(flag){
            ans.push_back(temp);
        }
        return;
    }
    fun(n-1,ans,temp+'0');
    fun(n-1,ans,temp+'1');
   
}
void solve()
{
    ll n;
    cin >> n;
    vector<string> ans;
    fun(n,ans,"");
    f(i,0,ans.size()){
        cout<<ans[i]<<endl;
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