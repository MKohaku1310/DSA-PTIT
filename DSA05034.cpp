#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
long long dp[100005];
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        dp[0]=1;
        long long check = 1;
        for(int i=1;i<=n;i++){
            dp[i]= check%MOD;
            if(i<k) check += dp[i];
            else{
                check += dp[i];
                check -= dp[i-k];
                if(check<0) check += MOD;
            }
        }
        cout << dp[n] << endl;
    }
}