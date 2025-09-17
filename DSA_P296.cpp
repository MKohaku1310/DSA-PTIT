#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin >> n >> q;
    int a[n];
    for(int i=1;i<=n;i++) cin >> a[i];
    int cnt = 0,b[n];
    b[0]=0;
    for(int i=1;i<=n;i++){
        if(a[i]>0) cnt += a[i];
        b[i]=cnt;
    }
    while(q--){
        int l,r; cin >> l >> r;
        if(b[r]-b[l-1]>0) cout << b[r]-b[l-1] << endl;
        else cout << "0" << endl;
    }
}