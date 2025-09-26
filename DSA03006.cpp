#include<bits/stdc++.h>

using namespace std;
int check(int a[],int n){
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]>a[r]){
            swap(a[l],a[r]);
        }
        l++;r--;
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(check(a,n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}