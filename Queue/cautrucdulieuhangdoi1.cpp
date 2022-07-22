#include <bits/stdc++.h>
using namespace std;
string s;
main(){
    int t;
    cin >> t;
    queue <int > q;
    cin.ignore();
    while(t--){
        cin >> s;
        if(s=="PUSH"){
            int so;
            cin >> so;
            q.push(so);
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()) cout << q.front() ;
            else cout <<"NONE";
            cout << endl;
        }
        else {
            if(!q.empty()) q.pop();
        }
    }
}