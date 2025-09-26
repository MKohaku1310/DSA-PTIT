#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        long long mod = 1e9+7;
        long long a,b; cin >> a >> b;
        if(a==b&&a==0) return 0;
        long long cnt = 1;
        while(b>0){
        if(b%2!=0){
            cnt = (cnt*a)%mod;
        }
        a = (a*a)%mod;
        b/=2;
    }
    cout << cnt << endl;
} 
}