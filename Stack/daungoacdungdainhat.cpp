#include <bits/stdc++.h>
using namespace std;
string s;
void solve(string s){
    stack <int> st;
    int n = s.length();
    int mx=0;
    st.push(-1);
    for(int i=0;i<n;i++){
        char c = s[i];
        if(c=='(') st.push(i);
        else{
                if(!st.empty()){
                st.pop();
                if(st.size()>0) mx=max(mx,i-st.top());
                if(st.size()==0 ) st.push(i);
                }
        }

    }
    cout << mx << endl;
}
main(){
    int t;
    cin>> t;
    cin.ignore();
    while(t--){
        cin >> s;
        solve(s);
        }
    }