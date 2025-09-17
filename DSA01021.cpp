#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,k,cnt=0; cin >> n >> k;
		int a[k+1],b[k+1];
		for(int i=1;i<=k;i++){
			cin >> a[i];
            b[i]=a[i];
		}
		int d = k;
		while(b[d]==n-k+d&&d>0){
			d--;
		}
		if(d<1){
			cout << k << endl;
		}
	    else{
			b[d]++;
			for(int j=d+1;j<=k;j++){
				b[j]=b[j-1]+1;
			}
			for(int i=1;i<=k;i++){
				for(int j = 1;j<=k;j++){
					if(b[i]==a[j]) cnt++;
				}
			}
			if(cnt==k) cnt = 0;
			cout << k - cnt << endl;
		}
	}
}