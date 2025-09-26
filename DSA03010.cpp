#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        pq.push(x);
    }
    long long cnt=0;
    while(pq.size()>1){
          long long top1 = pq.top(); pq.pop();
          long long top2 = pq.top(); pq.pop();
          cnt+=top1+top2;
          pq.push(top1+top2);
    }
    cout << cnt << endl;
    }
}