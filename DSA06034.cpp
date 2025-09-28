#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long k; cin >> k;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		unordered_map<long long,long long>u;
		long long dem = 0;
		for(int i=0;i<n;i++){
			long long check = k-a[i];
			dem += u[check];
			u[a[i]]++;
		}
		cout << dem << endl;
	}
}