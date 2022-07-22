#include <bits/stdc++.h>
using namespace std;
string s;
int check(string s,int a, int b){
    if(s=="/") return a/b;
    if(s=="+") return a+b;
    if(s=="-") return a-b;
    if(s=="*") return a*b;
    if(s=="%") return a%b;
    if(s=="^") return a^b;
}
void solve(string s){
    int n = s.length();
    stack <int> st;
    for(int i =0;i<n;i++){
        string c="";
        c+=s[i];
        if(s[i]>='0'&&s[i]<='9'){
            st.push(stoi(c));
        }
        else{
            int tmp= 0 ;
            int t1 = st.top();
            st.pop();
            int t2= st.top();
            st.pop();
            tmp =+ check(c,t2,t1);
            st.push(tmp);
        }
    }
    cout <<st.top() << endl;
}
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s;
        solve(s);
    }
}