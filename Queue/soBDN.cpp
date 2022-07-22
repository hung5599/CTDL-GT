#include<bits/stdc++.h>
using namespace std;
long long s;
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s;
        queue <long long> q;
        q.push(1);
        long long kq;
        while(s--){
            long long x = q.front();
            cout << x <<" ";
            q.pop();
            q.push(x*10);
            q.push(x*10+1);
            }
            cout << endl;
        }
}