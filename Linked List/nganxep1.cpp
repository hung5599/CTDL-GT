#include <bits/stdc++.h>
using namespace std;
stack <string> st;
void xuli1(string s){
    string s1="";
    string s2="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
        if(s[i]>='A' && s[i]<='Z') s1+= s[i];
        else s2+= s[i];
    }
    }
    if(s1=="PUSH"){
        st.push(s2);
    } 
    else if(s1 =="POP"&& !st.empty()) st.pop();
    else if(s1 =="PRINT") {
        if (!st.empty()){
            cout << st.top();
        }
        else cout << "NONE";
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        xuli1(s);
    }
    return 0;
}