#include<bits/stdc++.h>
using namespace std;
void gray3(string s){
    string gray = "";
    gray += s[0];
    int l = s.size();
    for(int i=1;i<l;i++){
        char g = (s[i]==s[i-1] ? '0' : '1');
        gray += g;
    }
    cout << gray << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        gray3(s);
    }
}