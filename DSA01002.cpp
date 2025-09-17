#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> X(K + 1);
        for (int i = 1; i <= K; i++) cin >> X[i];

        // Tìm vị trí thay đổi
        int i = K;
        while (i > 0 && X[i] == N - K + i) i--;

        if (i == 0) {
            // đã là tập con cuối -> quay về tập con đầu
            for (int j = 1; j <= K; j++) cout << j << " ";
        } else {
            X[i]++;
            for (int j = i + 1; j <= K; j++) {
                X[j] = X[j - 1] + 1;
            }
            for (int j = 1; j <= K; j++) cout << X[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
