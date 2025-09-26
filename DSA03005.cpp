#include<bits/stdc++.h>

using namespace std;
void check(){
    int n,k; cin >> n >>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    k = min(k,n-k);
    long long res1=0,res2=0;
    for(int i=0;i<k;i++){
        res1 += a[i];
    }
    for(int i=k;i<n;i++){
        res2+=a[i];
    }
    cout << res2-res1;
}
int main(){
    int t; cin >> t;
    while(t--){
        check();
        cout << endl;
    }
}