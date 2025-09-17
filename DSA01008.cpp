#include<bits/stdc++.h>
using namespace std;
int n,ok,k,a[10000];
void tao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}
int test(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) dem++;
    }
    if(dem!=k) return 0;
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        tao();
        while(ok){
            if(test()){
                for(int i=1;i<=n;i++){
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
}