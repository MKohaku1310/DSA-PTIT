#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int sum = 0;
        int max1 = 0;
        for(auto x:a){
            sum += x;
            if(sum<=0) sum = 0;
            max1 =max(max1,sum);
        }
        cout << max1 << endl;
    }
}