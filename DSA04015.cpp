#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n,int k){
    int l=0,r=n-1;
    int ans = -2;
    while(l<=r){
        int giua = l+(r-l)/2;
        if(a[giua]>k) r=giua-1;
        else{
            ans = giua;
            l = giua + 1;
        } 
    }
    return ans+1;
}
int main(){

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << check(a,n,k) << endl;
    }
}