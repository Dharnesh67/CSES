#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vvch vector<vector<char>>
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define pb push_back
#define mod 1000000007

ll fun(ll i, ll j, vvch &maze) {
    if (i < 0 || j < 0 || i >= 7 || j >= 7 || maze[i][j] == '*') {
        return 0;
    }
    if (i == 6 && j == 6) { // Base case: Reached destination
        return 1;
    }
    ll count = 0;
    char temp = maze[i][j]; // Store original value
    maze[i][j] = '*';       // Mark as visited

    // Move in valid directions based on the current cell's character
    if (temp == '?' || temp == 'R') count += fun(i, j + 1, maze); // Right
    if (temp == '?' || temp == 'D') count += fun(i + 1, j, maze); // Down
    if (temp == '?' || temp == 'L') count += fun(i, j - 1, maze); // Left
    if (temp == '?' || temp == 'U') count += fun(i - 1, j, maze); // Up

    maze[i][j] = temp;      // Restore original value for backtracking
    return count;
}

void solve() {
    string s;
    cin>>s;
    vvch maze(7, vector<char>(7));
    maze[6][6]='?';
    ll x=0;
    f(i, 0, 7) {
        f(j, 0, 7) {
            maze[i][j]=s[x];
            x++;
        }
    }
    // f(i, 0, 7) {
    //     f(j, 0, 7) {
    //        cout<<maze[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout << fun(0, 0, maze) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
