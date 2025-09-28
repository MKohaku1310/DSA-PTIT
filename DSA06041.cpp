#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int,int>mp;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			mp[x]++;
		}
		int d = n/2;
		int check = 0;
		for(auto it : mp){
			if(it.second>d){
				cout << it.first << endl;
				check = 1;
				break;
			}
		}
		if(check==0) cout << "NO" << endl;
	}
}