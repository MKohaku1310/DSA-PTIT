#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		int s =0;
		cin >> a[0]; b[0]=a[0];
		s += a[0];
		for(int i=1;i<n;i++){
			cin >> a[i];
			b[i]=b[i-1]+a[i];
			s +=  a[i];
		}
		int check = 1;
		for(int i=1;i<n;i++){
			if(b[i]-a[i]==s-b[i]){
				cout << i + 1 << endl;
				check = 0;
				break;
			}
		}
		if(check) cout << -1 << endl;
	}
}