#include<bits/stdc++.h>

using namespace std;
string sinh(string s){
    int i = s.size()-1;
    while(i>=0&&s[i]=='1'){
        s[i]='0';
        i--;
    }
    if(i!=-1) s[i]='1';
    return s;
}
int main(){
    int t; cin >> t;
    while(t-- ){
        string s; cin >> s;
        cout << sinh(s) << endl;
    }
}