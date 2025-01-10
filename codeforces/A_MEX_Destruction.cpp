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
    vll v(n);
    f(i, 0, n) cin >> v[i];
    ll count = 0;
    f(i, 0, n)
    {
        if (v[i] == 0)
            count++;
    }
    if (count == n)
    {
        cout << 0 << endl;
        return;
    }
    ll pos=-1;
    ll zero=-1;
    f(i,0,n){
        if(pos==-1 && v[i]>0) pos=1;
        if(v[i]==0 && pos!=-1){
            zero=1;
        }
        if(v[i]>0 && zero!=-1 && pos!=-1){
            cout<<2<<endl;
            return ;
        }
    }
    cout<<1<<endl;
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