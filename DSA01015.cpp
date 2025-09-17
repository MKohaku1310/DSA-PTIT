#include <bits/stdc++.h>
using namespace std;

void check() {
    int n; 
    cin >> n;
    queue<string> q;
    q.push("9");
    while (1) {
        string s = q.front();
        q.pop();
        int x = 0;
        for (char i : s) {
            x = x * 10 + (i - '0');
            x %= n;
        }
        if (x == 0) {
            cout << s << "\n";
            return; // kết thúc hàm
        } else {
            q.push(s + "0");
            q.push(s + "9");
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        check();
    }
    return 0;
}
