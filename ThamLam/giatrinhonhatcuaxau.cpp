#include <bits/stdc++.h>
using namespace std;
main(){
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s ;
        int a[300]={};
        priority_queue <int> q;
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
        }
        for(int i=0;i<300;i++){
            if(a[i]>0) q.push(a[i]);
        }
        while(n--){
            int s= q.top();
            q.pop();
            s--;
            q.push(s);
        }
        long long kq=0;
        while(!q.empty()){
            int s=q.top();
            q.pop();
            kq+= s*s;
        }
        cout << kq << endl;
    }
}