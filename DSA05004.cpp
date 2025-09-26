#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    int cnt = 0;
    int res[n]={1};
    
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                res[i]=max(res[i],res[j]+1);
                cnt = max(cnt,res[i]);
            }
        }
    }
    cout << cnt << endl;
}