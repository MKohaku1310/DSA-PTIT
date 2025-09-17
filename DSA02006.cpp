#include<bits/stdc++.h>
using namespace std;
int n,k,ok=0;
int a[102],b[102];
void Try(int posa,int posb,int sum){
    for(int i=posa+1;i<=n;i++){
        if(sum+a[i]==k){
            ok = 1;
            b[posb+1]=a[i];
            cout << "[" << b[0];
            for (int j = 1; j <= posb + 1; j++)
                cout << " " << b[j];
            cout << "] ";
            return;
        }
        else if(sum+a[i]<k){
            b[posb+1]=a[i];
            Try(i,posb+1,sum+a[i]);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ok = 0;
     cin >> n >> k;
     for(int i=1;i<=n;i++){
        cin >> a[i];
     }
    sort(a+1,a+n+1);
    Try(0,-1,0);
    if(ok==0) cout << -1 << endl;
    cout << endl;
    }
}