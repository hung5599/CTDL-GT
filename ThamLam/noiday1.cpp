#include <bits/stdc++.h>
using namespace std;
int n;
const long long MOD=1e9+7;
main(){
    int t;
    cin >> t;
    while(t--){
        cin >>n;
        long long a;
        priority_queue<long long,vector <long long> , greater <long long > > pq;
        for(int i=0;i<n;i++){
            cin >> a;
            pq.push(a);
        }
        
        long long Fopt=0;
        while(pq.size()>1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long tong = (first + second)%MOD;
            pq.push(tong);
            Fopt+=tong;
            Fopt%=MOD;
        }
        cout << Fopt << endl;
    }
}