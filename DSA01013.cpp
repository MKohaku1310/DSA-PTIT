#include<bits/stdc++.h>

using namespace std;
void gray2(string s){
    int l = s.size();
    string nhiphan = "";
    nhiphan += s[0];
    for(int i=1;i<l;i++){
        if(s[i]=='0') nhiphan += nhiphan[i-1];
        else nhiphan += (nhiphan[i-1]=='0' ? '1' : '0');
    }
    cout << nhiphan << endl;
}
int main(){
    int t=0; cin >> t;
    while(t--){
        string s; cin >> s;
        gray2(s);
    }
}