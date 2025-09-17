#include<bits/stdc++.h>

using namespace std;
int n;
string M[100];
int res = INT_MAX;
bool check[1000];
int kt(string a, string b){
    int cnt = 0;
    for(char c : a){
        for(char v : b){
            if(c==v) cnt++;
        }
    }
    return cnt;
}
void Try(int dem,int sum, int k){
    for(int i=1;i<n+1;i++){
        if(!check[i]){
            check[i]=true;
            if(dem==n) res = min(res,sum+kt(M[k],M[i]));
            else if(res>sum&&dem<n)
            Try(dem+1,sum+kt(M[k],M[i]),i);
            check[i]=false;
        }
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin >> n;
    for(int i=1;i<n+1;i++){
        cin >> M[i];
    }
    Try(1,0,0);
    cout << res << endl;
}