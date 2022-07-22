#include <bits/stdc++.h>
using namespace std;
string s;
void xuly()
{
    string s;
    getline(cin,s);
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z') && s[i] != ')') st.push(s[i]);
        if (s[i]== ')')
        {
            if (st.top() == '(')
            {
                cout << "Yes" << endl;
                return;
            }
            while (!st.empty() && st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << "No" <<endl;
}
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        xuly();
    }
}