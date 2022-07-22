#include<bits/stdc++.h>
using namespace std;
int n,a[100005],kq1[100005],kq2[100005];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        memset(kq1,0,sizeof(kq1));
        memset(kq2,0,sizeof(kq2));
        stack <int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
            if(st.empty()) kq1[i]=-1;
            else kq1[i]=st.top();
            st.push(i);
        }
        stack <int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&a[i]<=s.top()) s.pop();
            if(s.empty()) kq2[i]=-1;
            else kq2[i]=s.top();
            s.push(a[i]);
        }
        for(int i=0;i<n;i++){
            if(kq1[i]==-1) cout << -1 <<" "; 
            else cout << kq2[kq1[i]] <<" ";
        }
        cout << endl;
    }
}