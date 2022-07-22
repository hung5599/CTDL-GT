#include <bits/stdc++.h>
using namespace std;
int n,A[100005],trai[100005],phai[100005];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >>n;
        for(int i=0;i<n;i++) cin >> A[i];
        stack <int>  st;
        for(int i= n -1;i>=0;i--){
            while(!st.empty()&&A[i]<=A[st.top()]&&i!=st.top()) st.pop();
            if(!st.empty()) trai[i] = st.top();
            else trai[i]=n;
            st.push(i); 
        }
        stack <int> s;
        for(int i= 0;i<n;i++){
            while(!s.empty()&&A[i]<=A[s.top()]) s.pop();
            if(!s.empty()) phai[i] = s.top();
            else phai[i]=-1;
            s.push(i); 
        }
        long long mx=-1000;
        for(int i=0;i<n;i++){
            long long tmp =A[i]*(trai[i]-phai[i]-1);
            mx = max(tmp,mx);
        }
        cout << mx << endl;
    }
}