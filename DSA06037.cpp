#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		long long x[n],y[n];
		x[0]=a[0];
		y[n-1]=a[n-1];
		for(int i=1;i<n;i++) x[i] = max(x[i-1],x[i]);
		for(int i=n-2;i>=0;i--) y[i]=min(y[i+1],y[i]);
		int dem =0;
		for(int i=0;i<n-1;i++){
			if(x[i]<=y[i+1]) dem++;
		}
		cout << dem << endl;
		for(int i=0;i<n-1;i++){
			if(x[i]<=y[i+1]) cout << i+1 << " ";
		}
		cout << endl;
	}
}