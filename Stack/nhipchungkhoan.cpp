#include <bits/stdc++.h>
using namespace std;
int n, a[100005];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        stack <int> st;
        vector <int > v;
        for(int i=0;i<n;i++){
            while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
            if(st.empty()) v.push_back(i+1);
            else v.push_back(i - st.top());
            st.push(i);
        }
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        cout << endl;
    }
}