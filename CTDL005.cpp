#include<bits/stdc++.h>

using namespace std;
int n,ok,a[1000];
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i= n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]=1;
	}
}
int main(){
	int k,cnt = 0;
	cin >> n >> k;
	int b[n];
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	ok = 1;
	while(ok){
		int sum = 0;
		for(int i=1;i<n;i++){
			if(a[i]==1){
				sum+=b[i-1];
			}
		}
		if(sum==k){
			for(int i=0;i<n;i++){
				if(a[i]==1){
					cout << b[i-1] << " ";
				}
			}
			cout << endl;
		}
		cnt++;
	}
	cout << cnt << endl;
}