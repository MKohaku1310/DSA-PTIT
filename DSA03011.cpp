#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n];
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(long long i=0;i<n;i++){
            cin >> a[i];
            pq.push(a[i]);
        }
        long long cnt=0;
        long long mod = 1e9+7;
        while(pq.size()>1){
            long long top1 = pq.top(); pq.pop();
            long long top2 = pq.top(); pq.pop();
            pq.push((top1%mod+top2%mod)%mod);
            cnt = (cnt%mod+(top1%mod+top2%mod)%mod)%mod;
        }
        cout << cnt << endl;
    }
}