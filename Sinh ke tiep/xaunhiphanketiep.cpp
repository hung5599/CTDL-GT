#include<bits/stdc++.h>
using namespace std;
bool first(string s){
    int len = s.size();
    for(int i =0 ;i< len;i++){
        if(s[i]=='1') return false;
    }
    return true;
}
void Sinh(string s){
    if(first(s)) {
        for(int i=0;i<s.size();i++){
            s[i]='1';
        }
        cout << s << "\n";
    }
    else{
    int n = s.size()-1;
    while(n>0&&s[n]=='0'){
        s[n]='1';
        n--;
    }
    s[n]='0';
    cout << s << "\n";
}
}
int main(){
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--){
        string s;
        cin >> s;
        Sinh(s);
    }
}