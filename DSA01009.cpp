#include<bits/stdc++.h>

using namespace std;

int n,k,ok=1,a[10000];
void tao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i]=1;
    }
}
int check(){
    int cnt=0,res=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            cnt++;
        }
        else{
            cnt = 0;
        }
    if(cnt > k) return 0;
    if(cnt==k) res++;
    }
    return res==1;
}
int main(){
    cin >> n >> k;
    vector<vector<int>> v;
    ok = 1;
    tao();
    while(ok){
        if(check()){
            vector<int> tmp(a+1,a+n+1);
            v.push_back(tmp);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(vector<int>it:v){
        for(int x : it){
            if(x==1) cout << "B";
            else cout << "A";
        }
        cout << endl;
    }
}