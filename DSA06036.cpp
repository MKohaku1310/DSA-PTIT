#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int check = 0;
		for(int i=0;i<n-2;i++){
			int l = i+1,r=n-1;
			while(l<r){
				int sum = a[i]+a[l]+a[r];
				if(sum == k){
					check = 1;
					break;
				}
				else if(sum<k) l++;
				else r--;
			}
			if(check) break;
		}
	    if(check) cout << "YES" << endl;
	    else cout << "NO" << endl;
}
}