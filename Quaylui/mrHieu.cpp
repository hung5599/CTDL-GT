#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7,n,a[1000006];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >>n ;
        priority_queue<int,vector <long long> , greater <long long > > q;
        for(int i=0;i<n;i++){
            cin >> a[i];
            q.push(a[i]);    
        }
        long long fopt=0;
        while(q.size()!=1){
            int t1 = q.top();
            q.pop();
            int t2= q.top();
            q.pop();
            long long tong = (t1+t2)%M;
            q.push(tong);
            fopt+= tong;
            fopt%=M;

        }
        cout << fopt << endl;
    }      
}