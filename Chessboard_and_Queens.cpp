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

bool check(ll i,ll j,vector<vector<char>> &maze){
    ll r=i,c=j;
    while(r>=0){
        if(maze[r][j]=='Q'){
            return false;
        }
        r--;
    }
    r=i,c=j;
    while(r>=0 && c>=0){
        if(maze[r][c]=='Q'){
            return false;
        }
        r--;
        c--;
    }
    r=i,c=j;
    while(r>=0 && c<8){
        if(maze[r][c]=='Q'){
            return false;
        }
        r--;
        c++;
    }
    return true;
}
ll fun(ll i, vector<vector<char>> &maze)
{
    if (i == 8)
    {
        return 1;
    }
    ll count=0;
    f(j, 0, 8)
    {
        if(maze[i][j]!='*' &&  check(i,j,maze)){
            maze[i][j]='Q';
            count+=fun(i+1,maze);
            maze[i][j]='.';
        }
    }
    return count;
}
void solve()
{
    vector<vector<char>> maze(8, vector<char>(8));
    f(i, 0, 8)
    {
        f(j, 0, 8)
        {
            cin >> maze[i][j];
        }
    }
    cout << fun(0, maze);
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