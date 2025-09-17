#include<bits/stdc++.h>

using namespace std;
long long n,k,a[101]={0};
vector<string>v;
void now(){
    for(int i=1;i<=k;i++){
        cout << v[a[i]-1] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int y=a[i-1]+1;y<=v.size()-(k-i);y++){
        a[i]=y;
        if(i==k) now();
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    string s;
    set<string>se;
    for(int i=1;i<=n;i++){
        cin >> s;
        se.insert(s);
    }
    for(auto it=se.begin();it!=se.end();it++){
        v.push_back(*it);
    }
    Try(1);
}