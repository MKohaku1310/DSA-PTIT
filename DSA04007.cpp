#include<bits/stdc++.h>

using namespace std;

long long check(int k,string n){
    long long cnt = 0;
    for(int i=0;i<n.size();i++){
        cnt = cnt*k+n[i]-'0';
    }
    return cnt;
}
string check1(int k,int n){
    string res = "";
    while(n){
       res = to_string(n%k)+res;
       n/=k;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string a,b; cin >> a >> b;
        int x = check(k,a);
        int y = check(k,b);
        long long z = x+y;
        cout << check1(k,z) << endl;
    }
}