#include<bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	set<int>s;
	vector<vector<int>>v;
	for(int i=0;i<n;i++){
		cin >> a[i];
		s.insert(a[i]);
	    vector<int>t;
	    for(int x : s) t.push_back(x);
	    v.push_back(t);
	}
	for(int i=v.size();i>0;i--){
		cout << "Buoc " << i-1 << ": ";
		for(int j : v[i-1]) cout << j << " ";
		cout << endl;
	}
}