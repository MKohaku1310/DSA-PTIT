#include<bits/stdc++.h>
using namespace std;
void check(){
    int n; cin >> n;
        vector<pair<int,int>>s;
        vector<int>st(n),ed(n);
        for(int i=0;i<n;i++) cin >> st[i] >> ed[i];
        for(int i=0;i<n;i++) s.push_back({ed[i],st[i]});
        sort(s.begin(),s.end());
        int cnt = 0,last = 0;
        for(auto it:s){
            int kt = it.first;
            int bd = it.second;
            while(bd>=last){
                cnt++;
            last = kt;
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