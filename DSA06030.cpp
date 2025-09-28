#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int>a(n);
		vector<vector<int>>v;
		for(int i=0;i<n;i++) cin >> a[i];
		int m = n-1;
		for(int i=0;i<m;i++){
			int check = 1;
			for(int j = 0;j<m-i;j++)
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					check = 0;
				}
					if(check) break;
			vector<int>s(n);
			for(int k=0;k<n;k++) s[k]=a[k];
			v.push_back(s);
			}
			
			for(int i=v.size();i>0;i--){
				cout << "Buoc " << i << ": " << ' ';
				for(int j : v[i-1]) cout << j << " ";
				cout << endl;
			}
		}
		
	}