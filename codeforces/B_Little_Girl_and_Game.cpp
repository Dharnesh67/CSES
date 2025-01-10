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
    string s;
    cin>>s;
    vll v(26);
    f(i,0,s.size()){
        v[s[i]-'a']++;
    }
    ll oddcount=0;
    f(i,0,26){
        if(v[i]%2!=0){
            oddcount++;
        }
    }
    if(oddcount==0){
        cout<<"First";
    }else if((oddcount-1)%2==0){
        cout<<"First";
    }else{
        cout<<"Second";
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