#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long check(long long n, long long k){
    long long res = 1;
    for(long long i=n-k+1;i<=n;i++){
        res =(res*i)%mod;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n,k; cin >> n >> k;
        cout << check(n,k) << endl;
    }
}