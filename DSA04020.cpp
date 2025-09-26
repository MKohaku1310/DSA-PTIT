#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int k){
    int l=0,r=n-1;
    int res = -1;
    while(l<=r){
        int giua = l+(r-l)/2;
        if(a[giua]==k){
            res = giua;
            r=giua-1;
        }
        else if(a[giua]<k){
            l = giua +1;
        }
        else r=giua-1;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int pos = check(a,n,k);
        if(pos==-1) cout << "NO" << endl;
        else cout << pos+1 << endl;
    }
}