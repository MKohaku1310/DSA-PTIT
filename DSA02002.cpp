#include<bits/stdc++.h>
using namespace std;
int n,a[10000];
vector<string>v;
void dequy(){
	if(n==0) return;
	stringstream ss;
	ss << "[";
	for(int i=0;i<n-1;i++){
		ss << a[i] << " ";
	}
	ss << a[n-1] << "]";
	v.push_back(ss.str());
	for(int i=0;i<n;i++){
		a[i]=a[i]+a[i+1];
	}
	n--;
	dequy();
}
int main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];
		dequy();
		for(int i=v.size()-1;i>=0;i--){
			cout << v[i] << " ";
		} cout << endl;
}
}