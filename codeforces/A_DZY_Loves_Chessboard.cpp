#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, s, e) for (long long int i = s; i < e; i++)

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    f(i, 0, n) {
        f(j, 0, m) {
            cin >> grid[i][j];
        }
    }

    // Create the checkerboard pattern
    f(i, 0, n) {
        f(j, 0, m) {
            if (grid[i][j] == '.') {
                // Alternate between 'B' and 'W' based on the parity of (i + j)
                grid[i][j] = (i + j) % 2 == 0 ? 'B' : 'W';
            }
        }
    }

    // Print the grid
    f(i, 0, n) {
        f(j, 0, m) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}