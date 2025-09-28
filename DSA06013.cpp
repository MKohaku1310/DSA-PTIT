#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[10000];
		int cnt = 0;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){
			if(a[i]==k) cnt ++;
		}
		if(cnt==0) cout << "-1" << endl;
		else cout << cnt << endl;
	}
}