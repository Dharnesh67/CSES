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
    if(stoi(s)%9==0){
        cout<<"YES"<<endl;
        return;
    }
    queue<string>q;
    q.push(s);
    while(!q.empty()){
        auto x=q.front();
        q.pop();
        if(stoi(x)%9==0){
            cout<<"YES"<<endl;
        }
        for(int i=0;i<x.size();i++){
            int c=x[i]-'0';
            if(c-'0'>3) continue;
            x[i]=(c*c)+'0';
            q.push(x);
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