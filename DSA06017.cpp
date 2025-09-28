#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int x;
		multiset<int>mul;
		while(n--){
			cin >> x;
			mul.insert(x);
		}
		while(m--){
			cin >> x;
			mul.insert(x);
		}
		for(auto x:mul) cout << x << " ";
		cout << endl;
	}
}