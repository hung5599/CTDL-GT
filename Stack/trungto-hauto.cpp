#include <bits/stdc++.h>

using namespace std;
int check(char x)
{
        if (x=='^')return 0;
        else if (x=='*'||x=='/'||x=='%')return 1;
        else if (x=='+'||x=='-')return 2;
        else return 3;
}
void solve()
{
    string s; cin >> s;
    stack<char> st;
    string res = "";
    for(int i=0;i<s.length();i++){
        if(('A'<=s[i]&&s[i]<='Z') || ('a'<=s[i]&&s[i]<='z')) res += s[i];
        else{
            switch(s[i]){
                case '(' : st.push(s[i]); break;
                case ')' :
                    while(st.top()!='(' && st.size()){
                            res += st.top(); st.pop();
                    }
                    st.pop(); break;
                case '^' : case '%' : case '*' : case '/' : case '+' : case '-':
                    while(st.size()&&check(st.top()) <= check(s[i])){
                        res += st.top(); st.pop();
                    } st.push(s[i]); break;
            }
        }
    }
    while(st.size()){
        if(st.top()!='(') res += st.top();
        st.pop();
    }
    cout << res << endl;
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
        solve();
    return 0;
}