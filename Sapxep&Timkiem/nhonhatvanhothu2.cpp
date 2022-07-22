#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    set <int> s;
    vector <int> v;
    cin >> n;
    int a[n];
    for( int i=0;i<n;i++) {
        cin >> a[i] ;
        s.insert(a[i]);
    }
    for(auto x : s){
        v.push_back(x);
    } 
    if(v.size()==1) cout << -1;
    else cout << v[0] <<" "<< v[1];
    cout << "\n";
    }
}