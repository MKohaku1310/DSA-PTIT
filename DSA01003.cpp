#include<bits/stdc++.h>
using namespace std;
int n,ok,a[1000];
void sinh(int a[]){
    int i = n-1;
    while(i>=1&&a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i]>a[j]) j--;
            swap(a[i],a[j]);
            int l = i+1,r=n;
            while(l<r){
                swap(a[l],a[r]);
                l++,r--;
            }
    }
}
void dau(int a[]){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        ok = 1;
        sinh(a);
        if(ok==0){
            dau(a);
            ok=1;
        }
        for(int i=1;i<=n;i++) cout << a[i] << " ";
        cout << endl;
    }
}