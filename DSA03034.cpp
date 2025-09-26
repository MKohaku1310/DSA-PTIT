#include<bits/stdc++.h>
using namespace std;

void check(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0,j=0,l=0;
    vector<int>v;
    while(i<a.size()&&j<b.size()&&l<c.size()){
        if(a[i]==b[j]&&b[j]==c[l]){
        v.push_back(a[i]);
        i++,j++,l++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[l]){
            j++;
        }
        else l++;
    }
    if(v.empty()) cout << "NO";
    else{
        for(auto it:v){
            cout << it << " ";
        }
    }
}
void nhap(){
    int n,m,k; cin >> n >> m >> k;
    vector<int>a(n);
    vector<int>b(m);
    vector<int>c(k);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    for(int i=0;i<k;i++) cin >> c[i];
    check(a,b,c);
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        cout << endl;
    }
}