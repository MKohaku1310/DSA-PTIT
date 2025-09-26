#include<bits/stdc++.h>
using namespace std;
void check(vector<int>&a,int n){
    int lmao[100000];
    int cnt = 0;
    for(int i=0;i<n;i++){
        lmao[a[i]] = lmao[a[i]-1]+1;
        cnt = max(cnt,lmao[a[i]]);
    }
    cout << n-cnt << endl;
}
int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    check(a,n);
}