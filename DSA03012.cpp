#include<bits/stdc++.h>

using namespace std;
void check(){
    string s; cin >> s;
    map<char,int>mp;
    for(auto x:s){
        mp[x]++;
    }
    for(auto x : mp){
        if(x.second*2-1>s.size()){
            cout << "-1";
            return;
        }
    }
    cout << "1";
}
int main(){
    int t ; cin >> t;
    cin.ignore();
    while(t--){
        check();
        cout << endl;
    }
}