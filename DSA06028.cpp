#include<bits/stdc++.h>

using namespace std;
int main(){
		int n; cin >> n;
		vector<int>a(n);
		vector<vector<int>>v;
		for(int i=0;i<n;i++) cin >> a[i];
		
		for(int i=0;i<n-1;i++){
			int min1 = i;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[min1]){
					min1 = j;
				}
			}
		swap(a[min1],a[i]);
		v.push_back(a);
		}	
		for(int i=v.size();i>0;i--){
			cout << "Buoc " << i << ": ";
			for(int j : v[i-1]) cout << j << " ";
			cout << endl;
		}
}