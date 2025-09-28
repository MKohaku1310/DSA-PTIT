#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int>A(n);
		for(int i=0;i<n;i++) cin >> A[i];
		vector<int> inc(n,1);vector<int> dec(n,1);
		for(int i=1;i<n;i++){
			if(A[i]>A[i-1]) inc[i]= inc[i-1]+1;
		}
		for(int i=n-2;i>=0;i--) {
			if(A[i]>A[i+1])
			dec[i]=dec[i+1]+1;}
		int res = 0;
		for(int i=0;i<n;i++){
			res = max(res,inc[i]+dec[i]-1);
		}
		cout << res << endl;
	}
}