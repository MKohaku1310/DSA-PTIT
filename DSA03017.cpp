#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<int>v;
        for(auto x:mp){
            v.push_back(x.second);
        }
        while(n>0){
            sort(v.begin(),v.end());
            v[v.size()-1]--;
            n--;
        }
        long long sum = 0;
        for(auto x:v) sum+=x*x;
        cout << sum << endl;
    }
}