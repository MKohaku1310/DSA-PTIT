#include<bits/stdc++.h>

using namespace std;
int n,a[1000];
void in(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void dequy(){
	if(n==0) return;
	else{
		
		cout << "[";
		for(int i=0;i<n-1;i++){
			cout << a[i] << " ";
		}
		cout << a[n-1] << "]" << endl;
		for(int i=0;i<n;i++){
			a[i]=a[i]+a[i+1];
		}
		n--;
		dequy();
	}
}
int main(){
	int t; cin >> t; 
	while(t--){
		in();
		dequy();
	}
}