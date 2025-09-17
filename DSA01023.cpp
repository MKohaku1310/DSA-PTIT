#include<bits/stdc++.h>
using namespace std;
int n,k,a[20],b[20];

int check(){
    for(int i=1;i<=k;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
    for(int i=1;i<=k;i++){
        a[i]=i;
        cin >> b[i];
    }
    int p = 1;
    while(1){
        if(check()){
            cout << p << endl;
            break;
        }
        int i=k;
        while(i>=1&&a[i]==n-k+i) i--;
        if(i==0) break;
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
        p++;
    }
    }
}