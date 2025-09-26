#include<bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int job,dl,p;
    vector<pair<int,int>>v;
    while(n--){
        cin >> job >> dl >> p;
        v.push_back({p,dl});
    }
    sort(v.begin(),v.end());
    int cnt = 0, last = 0;
    for(auto it : v){
        int bd = it.second;
        int kt = it.first;
        if(bd>=last){
            cnt++;
            last = kt;
        }
    }
}