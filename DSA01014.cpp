#include <bits/stdc++.h>
using namespace std;

int n, k, s, a[25];
int cnt; // đếm số tổ hợp thỏa
int target;

void Sum() {
    int sum = 0;
    for (int i = 1; i <= k; i++) sum += a[i];
    if (sum == target) cnt++;
}

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) Sum();
        else Try(i+1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        cin >> n >> k >> target;
        if (n == 0 && k == 0 && target == 0) break;
        cnt = 0;
        a[0] = 0; // khởi tạo để sinh tổ hợp đúng
        Try(1);
        cout << cnt << "\n";
    }
    return 0;
}
