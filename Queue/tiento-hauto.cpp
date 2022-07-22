#include <bits/stdc++.h>
using namespace std;
string s;
main(){
    int t; cin >> t;
    cin.ignore(1);
    while(t--){
        cin >> s;
        int n = s.length();
        stack < string > st;
        for(int i=n-1;i>=0;i--){
            string c = "";
            c+=s[i];
            if(s[i]>='A'&&s[i]<='Z'){
                st.push(c);
            }
            else {
                string str="";
                    string t1 = st.top();
                    st.pop();
                    string t2 = st.top();
                    st.pop();
                    str =t1 + t2 + c;
                    st.push(str);
            }
        }
        cout << st.top() << endl;
    }
}