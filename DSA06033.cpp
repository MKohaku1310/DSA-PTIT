#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100000];
        for(int i=0;i<n;i++) cin >> a[i];
        int x[100000],y[100000];
        x[0]=a[0],y[n-1]=a[n-1];
        for(int i=1;i<n;i++) x[i]=min(a[i],x[i-1]);
        for(int i=n-2;i>=0;i--) y[i]=max(a[i],y[i+1]);
        int res=-1;
        int c=0,b=0;
        while(c<n&&b<n){
            if(x[c]<y[b]){
                res=max(res,b-c);
                b++;
            }
            else c++;
        }
        if(res==0) cout << -1 << endl;
        else cout << res << endl;
    }
}