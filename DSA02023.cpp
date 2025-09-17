#include<bits/stdc++.h>

using namespace std;
int n,k,a[101]={0};
vector<string>v;
void in(){
    for(int i=1;i<=k;i++){
        cout << v[a[i]-1] << " ";
    }
    cout << endl;
}
void Try(int i){
     for(int y=a[i-1]+1;y<=v.size()-k+i;y++){
        a[i]=y;
        if(i==k) in();
        else Try(i+1);
     }
}
int main(){
    cin >> n >> k;
    string s;
    set<string>st;
    for(int i=1;i<=n;i++){
        cin >> s;
        st.insert(s);
    }
    for(auto it = st.begin();it!=st.end();it++){
        v.push_back(*it);
    }
    Try(1);
}