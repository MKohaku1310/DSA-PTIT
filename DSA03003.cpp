#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long check(vector<int>&a){
    long long n =0;
    for(int i=0;i<a.size();i++){
        n=(n+(1ll*a[i]*i)%mod)%mod;
    }
    return n%mod;
}
void it(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    cout << check(a) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        it();
    }
}