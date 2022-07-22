#include <bits/stdc++.h>
using namespace std;
string s;
void solve(string s){
    string str ="";
    stack <int> st;
    for(int i =1;i<s.size();i++){
        if(s[i]=='('&&s[i-1]=='-') st.push(i);
        else if(s[i]==')'&&!st.empty()){
            int moc = st.top();
            st.pop();
            for(int j = moc ; j<i;j++){
                if(s[j]=='+') s[j]='-';
                else if(s[j]=='-') s[j]='+';
            }

        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='('&&s[i]!=')') cout << s[i] ;
    }
    cout << endl;
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