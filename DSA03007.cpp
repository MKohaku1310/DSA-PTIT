#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++) cin >> b[i];
        sort(b.begin(),b.end(),greater<int>());
        long long cnt=0;
        for(int i=0;i<n;i++){
            cnt +=a[i]*b[i];
        }
        cout << cnt << endl;
    }
}