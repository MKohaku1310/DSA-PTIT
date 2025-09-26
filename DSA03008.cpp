#include<bits/stdc++.h>
using namespace std;
void check(){
    int n; cin >> n;
    vector<pair<int,int>>w;
    vector<int>s(n),f(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        cin >> f[i];
    }
    for(int i=0;i<n;i++){
        w.push_back({f[i],s[i]});
    }
    sort(w.begin(),w.end());
    int cnt = 0, last = 0;
    for(auto it : w){
        int bd = it.second;
        int kt = it.first;
        if(bd>=last){
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
