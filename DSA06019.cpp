#include<bits/stdc++.h>

using namespace std;
struct lmao{
	int a,c;
};
int cmp(lmao A, lmao B){
	if(A.c>B.c) return 1;
	if(A.c == B.c&&A.a<B.a) return 1;
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		lmao m[n];
		for(int i=0;i<n;i++){
			cin >> m[i].a;
			m[i].c=0;
		}
		for(int i=0;i<n;i++){
			for(int j =0;j<n;j++){
				if(m[i].a==m[j].a) m[i].c++;
			}
		}
		sort(m,m+n,cmp);
		for(int i=0;i<n;i++) cout << m[i].a << " ";
		cout << endl;
    }
}