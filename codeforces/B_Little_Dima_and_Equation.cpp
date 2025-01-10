#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

// Helper function to calculate the digit sum of a number
ll digitSum(ll num) {
    ll sum = 0,r=0;
    while (num) {
        r=num%10;
        sum += r;
        num /= 10;
    }
    return sum;
}

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    vll ans;

    // Iterate over possible digit sums (maximum digit sum for numbers < 10^9 is 81)
    for (ll s = 1; s <=100; s++) {
        ll x = b * pow(s, a) + c;
        // Check if x is a valid number
        if (  digitSum(x) == s && x<=1000000000) {
            ans.push_back(x);
        }
    }

    // Output the results
    cout << ans.size() << endl;
    for (ll num : ans) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
