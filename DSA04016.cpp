#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m), c;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            c.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        if (k >= 0 && k < c.size()) {
            cout << c[k-1] << endl;
        } 
    }
}
