#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m,l; cin >> n >> m >> l;
        vector<int>a(n),b(m),c(l);
        set<int>X,Y,Z;
        for(int i=0;i<n;i++){
            cin >> a[i];
            X.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            Y.insert(b[i]);
        }
        for(int i=0;i<l;i++){
            cin >> c[i];
            Z.insert(c[i]);
        }
        set<int>T;
        for(auto x:X){
            if(Y.count(x)){
             T.insert(x);
        }
    }
        for(auto x:Y){
        if(Z.count(x)){
            T.insert(x);
        }
        }
        for(auto x:T){
            cout << x << " ";
        }
        cout << endl;
    }
}