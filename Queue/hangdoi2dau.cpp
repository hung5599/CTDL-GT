#include <bits/stdc++.h>
using namespace std;
string s;
main(){
    int t;
    cin >> t;
    deque <int > q;
    cin.ignore();
    while(t--){
        cin >> s;
        if(s=="PUSHFRONT"){
            int a; cin >> a;
            q.push_front(a);
        }
        else if(s=="PRINTFRONT"){
            if(q.empty()) cout << "NONE" <<endl;
            else cout << q.front() << endl;
        }
        else if (s=="POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(s=="PUSHBACK"){
            int a; cin >> a;
            q.push_back(a);
        }
        else if (s=="PRINTBACK"){
            if(q.empty()) cout << "NONE" <<endl;
            else cout << q.back() << endl;
        }
        else if (s=="POPBACK"){
            if(!q.empty()) q.pop_back();
        }
    }
}