#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[1000000];
        for(int i=0;i<n;i++) cin >> a[i];
        long long cnt = 0;
        long long dp[1000000];
        dp[0]=a[0]; dp[1]=max(a[1],a[0]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);
            cnt = max(cnt,dp[i]);
        }
        cout << cnt << endl;
    }
}