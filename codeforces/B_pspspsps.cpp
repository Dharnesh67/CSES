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
    string str;
    cin >> str;
    ll p = -1, s = -1;
    f(i, 0, n)
    {
        if (str[i] == 's')
        {
            s = 1;
        }
        if (str[i] == 'p')
        {
            p = 1;
        }
    }
    if ((s == -1 && p == 1) || (s == 1 && p == -1) || (s == -1 && p == -1))
    {
        cout << "YES" << endl;
        return;
    }
    if(str[0]=='s'){
        ll i=1;
        bool flag=true;
        while(i<n){
            if(str[i]=='s'){
                flag=false;
                break;
            }
            i++;
        }
        if(flag){
            cout<<"YES"<<endl;
            return;
        }
    }
     if(str[n-1]=='p'){
        ll i=n-2;
        bool flag=true;
        while(i>=0){
            if(str[i]=='p'){
                flag=false;
                break;
            }
            i--;
        }
        if(flag){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout << "NO" << endl;
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