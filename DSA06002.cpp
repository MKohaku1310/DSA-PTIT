#include<bits/stdc++.h>

using namespace std;
struct lmao{
	int a,b,c;
};
int cmp(lmao A, lmao B){
	if(A.c<B.c) return 1;
	if(A.c == B.c&&A.b<B.b) return 1;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		lmao m[n];
		for(int i=0;i<n;i++){
			cin >> m[i].a;
			m[i].b=i;
			m[i].c=abs(k-m[i].a); 
		}
		sort(m,m+n,cmp);
		for(int i=0;i<n;i++) cout << m[i].a << " ";
		cout << endl;
	}
}