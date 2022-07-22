#include <bits/stdc++.h>
using namespace std;
int n;
long long moc(int n){
    long long a=0;
    for(int i=1;i<=n;i++){
        a+= pow(2,i);
    }
    return a;
}
main(){
    int t;
    cin >> t;
    while(t--){
        vector <string> v;
        cin >> n;
        queue <string> q;
        q.push("6");
        q.push("8");
        long long k = moc(n);
        while(k--){
            string x = q.front();
            q.pop();
            v.push_back(x);
            q.push(x+"6");
            q.push(x+"8");
        }
        cout << v.size() << endl;
        for(int i=v.size()-1;i>=0;i--) cout <<v[i] <<" ";
        cout << endl;
    }
}