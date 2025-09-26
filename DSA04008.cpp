#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long check(int n){
    if(n<=1) return n;
    long long a=0,b=1;
    for(int i=2;i<=n;i++){
        long long tmp = (a+b)%mod;
        a = b;
        b = tmp;
    }
    return b;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << check(n) << endl;
    }
}