#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to count the number of 1s in the binary representation of a number
int popcount(int num) {
    return __builtin_popcount(num);
}

vector<string> can_sort_by_popcount(vector<pair<int, vector<int>>> test_cases) {
    vector<string> results;

    for (const auto& test_case : test_cases) {
        int N = test_case.first;
        const vector<int>& P = test_case.second;

        unordered_map<int, vector<int>> popcount_groups;
        for (int num : P) {
            int pop = popcount(num);
            popcount_groups[pop].push_back(num);
        }

        for (auto& group : popcount_groups) {
            sort(group.second.begin(), group.second.end());
        }

        vector<int> reconstructed;
        unordered_map<int, int> pop_index;
        for (int num : P) {
            int pop = popcount(num);
            reconstructed.push_back(popcount_groups[pop][pop_index[pop]++]);
        }

        vector<int> sorted_P = P;
        sort(sorted_P.begin(), sorted_P.end());
        if (reconstructed == sorted_P) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    return results;
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, vector<int>>> test_cases;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }
        test_cases.emplace_back(N, P);
    }

    vector<string> results = can_sort_by_popcount(test_cases);

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
