#include<bits/stdc++.h>
#define mod  1000000007
using namespace std;
long long Pow(long long n,long long k){
    if(k==1) return n;
    long long tmp = Pow(n,k/2);
    if(k&1) return tmp%mod * tmp%mod * n%mod;
    else return tmp%mod*tmp%mod;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n,k; cin >> n >> k;
        cout << Pow(n,k) << endl;
    }
}
