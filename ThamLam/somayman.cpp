#include<bits/stdc++.h>
using namespace std;
int tong(string s){
    int sum=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        sum += (s[i]-'0');
    }
    return sum;
}
main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        queue <string> q;
        q.push("4");
        q.push("7");
        while(tong(q.front())<=n+1){
            string  top= q.front();
            q.pop();
            if(tong(top)<n){
                q.push(top+"4");
                q.push(top+"7");
            }
            else if(tong(top)==n) {
                cout << top << endl;
                break;
            }
            else{
                cout << -1 << endl;
                break;
            }
        }
    }
}