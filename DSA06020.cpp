#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		set <int>v;
		for(int i=0;i<n;i++){cin >> a[i]; v.insert(a[i]);
		}  
			if(v.count(k)==0) cout << -1 << endl;
			else cout << 1 << endl;
	}
}