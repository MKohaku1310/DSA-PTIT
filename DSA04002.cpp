#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
long long pow1(long long n,long long k){
    if(k==1) return n;
    long long tmp = pow1(n,k/2);
    if(k&1) return tmp%mod*tmp%mod*n%mod;
    return tmp%mod*tmp%mod;
}
int main(){
    int t; cin >> t;
    while(t--){
    string n,r; cin >> n;
    r = n;
    reverse(r.begin(),r.end());
    cout << pow1(stoll(n),stoll(r))%mod << endl;
    }
}