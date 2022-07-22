#include <bits/stdc++.h>
using namespace std;
int n, a[100005],kq[100005];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        stack <int> st;
        for(int i = n-1;i>=0;i--){
            while(!st.empty()&&a[i]>=st.top()) st.pop();
            if(st.empty()) kq[i] = -1;
            else kq[i]= st.top();
            st.push(a[i]); 
        }
        for(int i=0;i<n;i++) cout << kq[i]<<" ";
        cout << endl;
    }
}