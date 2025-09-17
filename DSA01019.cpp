#include<bits/stdc++.h>

using namespace std;
int n,ok,a[1000];
void tao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}
int check(){
    if(a[1]!=1 || a[n]!=0) return 0; // H ở đầu, A ở cuối
    for(int i=1;i<n;i++){
        if(a[i]==1 && a[i+1]==1) return 0; // Không có hai H liền nhau
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok=1;
        tao();
        while(ok){
            if(check()){
                for(int i=1;i<=n;i++){
                    if(a[i]) cout <<"H";
                    else cout << "A";
                }
                cout << endl;
            }
            sinh();
        }
    }
}