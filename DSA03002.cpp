#include<bits/stdc++.h>
using namespace std;
int D5(string s){
    int n=0;
    for(auto i:s){
        if(i=='6')
            i='5';
            n = n*10+(i-'0');
    }
    return n;
}
int D6(string s){
    int n=0;
    for(auto i:s){
        if(i=='5')
            i='6';
            n= n*10+(i-'0');
    }
    return n;
}
int main(){
    string s1,s2; cin >> s1 >> s2;
    cout << D5(s1)+D5(s2) << " " << D6(s1)+D6(s2) << endl;
}