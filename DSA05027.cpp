#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, V;
        cin >> N >> V;
        vector<int> A(N), C(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> C[i];
        vector<vector<int>> dp(N + 1, vector<int>(V + 1, 0));
        for (int i = 1; i <= N; ++i) {
            for (int j = 0; j <= V; ++j) {
                if (j < A[i - 1]) {
                    dp[i][j] = dp[i - 1][j]; 
                } else {
                    dp[i][j] = max(dp[i - 1][j], C[i - 1] + dp[i - 1][j - A[i - 1]]);
                }
            }
        }

        cout << dp[N][V] << endl;
    }
    return 0;
}
