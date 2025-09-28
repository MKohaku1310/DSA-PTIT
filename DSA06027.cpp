#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<vector<int>>v;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i],a[j]);
			}
			vector<int>d(n);
			for(int k = 0;k<n;k++) d[k]=a[k];
			v.push_back(d);
		}
		for(int i=v.size();i>0;i--){
			cout << "Buoc " << i << ": ";
			for(int j : v[i-1]){
				cout << j << " ";
			}
			cout << endl;
		}
	}
}