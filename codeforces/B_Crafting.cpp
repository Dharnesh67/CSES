#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define pb push_back
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vll a(n), b(n);
    ll sum1 = 0, sum2 = 0;

    // Input the available materials and required materials
    f(i, 0, n)
    {
        cin >> a[i];
        sum1 += a[i]; // Total available materials
    }
    f(i, 0, n)
    {
        cin >> b[i];
        sum2 += b[i]; // Total required materials
    }

    ll surplus = 0;
    ll idx = -1;
    f(i, 0, n)
    {
        if (a[i] < b[i])
        {
            surplus++;
            idx = i;
        }
    }
    if (surplus > 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (surplus == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (surplus == 1)
    {
        ll diff = a[idx] - b[idx];
        f(i, 0, n)
        {
            if(i==idx) continue;
            if(a[i]+diff<b[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        solve(); // Solve each test case
    }
}
