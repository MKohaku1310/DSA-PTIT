#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int>a(n);
		int b[n];
		for(int i=0;i<n;i++) {
			cin >> a[i]; b[i]=a[i];
		}
		int Min = INT_MAX;
		int Max = INT_MIN;
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++){
				if(a[i]!=b[i]){
					Min = min(Min,i);
					Max = max(Max,i);
			}
		}
		cout << Min+1 << " " << Max+1 << endl;
	}
}