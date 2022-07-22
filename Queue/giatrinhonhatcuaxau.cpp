#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        string s;
        cin >> n >> s;
        long long a[305]={};
        priority_queue<long long> pq;
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
        }
        for(int i=0;i<=300;i++){
            if(a[i]>0) pq.push(a[i]);
        }
        while(n--){
            long long top = pq.top();
            pq.pop();
            top--;
            pq.push(top);
        }
        long long sum=0;
        while(!pq.empty()){
            long long top = pq.top();
            pq.pop();
            sum+= top*top;
        }
        cout <<  sum << endl;
    }
}