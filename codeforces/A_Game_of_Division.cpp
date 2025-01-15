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
    vll a(n);
    f(i,0,n) cin>>a[i];
    f(i,0,n){
        bool flag=true;
        f(j,0,n){
            if(j==i) continue;
            if(abs(a[i]-a[j])%k==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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