#include<bits/stdc++.h>
int f[1200][1200];
using namespace std;
int main(){
	int t; cin >> t;
	getchar();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		int m = s1.size();
		int n = s2.size();
		for(int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				if(i==0||j==0){
					f[i][j]=0;
				}
				else{
					if(s1[i-1]==s2[j-1]){
						f[i][j]=f[i-1][j-1]+1;
					}
					else{
						f[i][j]=max(f[i-1][j],f[i][j-1]);
					}
				}
			}
		}
		cout << f[m][n] << endl;
	}
}