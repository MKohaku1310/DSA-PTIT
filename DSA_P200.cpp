#include<bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) a[i]=i+1;
    int cnt = 1;
    do{
        cout << cnt++ << ": ";
        for(int i=0;i<n;i++){
            cout << a[i];
            if(i<n-1) cout << " ";
        }
        cout << endl;
    } while(next_permutation(a.begin(),a.end()));
}
