#include<bits/stdc++.h>
using namespace std;
void check(){
    int n; cin >> n;
    vector<pair<int,int>>s;
    vector<int>bd(n),kt(n);
    for(int i=0;i<n;i++){
        cin >> bd[i] >> kt[i];
    }
    for(int i=0;i<n;i++){
        s.push_back({kt[i],bd[i]});
    }
    sort(s.begin(),s.end());
    int cnt=0, last = 0;
    for(auto it : s){
        int st = it.second;
        int en = it.first;
        while(st>=last){
            cnt++;
            last = en;
        }
    }
    cout << cnt;
}
int main(){
    int t; cin >> t;
    while(t--){
        check();
        cout << endl;
    }
}