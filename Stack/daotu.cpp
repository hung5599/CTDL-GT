#include<bits/stdc++.h>
using namespace std;
void doing(string s){
    stringstream ss(s);
    string word;
    stack <string> st;
    while( ss >> word){
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        doing(s);
    }
}