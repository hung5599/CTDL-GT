#include <bits/stdc++.h>
using namespace std;
int s,k;
void check(){
    cin >>s>>k;
    vector <int> v;
    if(s>9*k){
        cout << -1 << endl;
        return;
    }
    int i=9;
    while(k>0){
        if(s>i){
            s-=i;
            v.push_back(i);
            k--;
        }
        else i--;
    }
    for(int i=v.size()-1;i>=0;i--) {
        if(i==v.size()-1) cout << v[i] +s;
        else cout << v[i];
    }
    cout << endl;
}
main(){
    int t;
    cin >> t;
    while(t--){
    check();
    }
}