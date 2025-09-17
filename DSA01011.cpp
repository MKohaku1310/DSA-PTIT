#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		cout << n <<  " ";
		if(next_permutation(s.begin(),s.end())){
			cout << s << endl;
		}
		else{
			cout << "BIGGEST" << endl;
		}
	}
}