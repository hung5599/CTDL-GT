#include <bits/stdc++.h>
using namespace std;
int kiemtra(string s){
    stack <char> st;
    int n = s.size(),i;
    char c;
    for(i=0;i<n;i++){
        c = s[i];
        if(c=='('||c=='['||c=='{') st.push(c);
        else{
            if(!st.empty() && st.top()== '(' && c == ')'  ) st.pop();
            else if(!st.empty() && st.top()== '{' && c == '}'  ) st.pop();
            else if(!st.empty() && st.top()== '[' && c == ']'  ) st.pop();
            else return 0;
    }
    }
    return 1;
}
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        getline(cin,s1);
        string s="";
        for(int i=0;i<s1.size();i++) if(s1[i]=='('||s1[i]==')'||s1[i]==']'||s1[i]=='['||s1[i]=='}'||s1[i]=='{') s+= s1[i];
        if(kiemtra(s)) cout << "true";
        else cout << "false";
        cout << endl;
    }
}