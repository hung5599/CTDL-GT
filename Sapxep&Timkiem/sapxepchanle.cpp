#include<bits/stdc++.h>
using namespace std;
bool comp(int a ,int b){
    return a>b;
}
int main(){
    int n;
    cin >> n ;
    int a[n];
    vector <int> v;
    vector <int> u;
    for( int i=1;i<=n;i++) {
        cin >> a[i] ;
        if(i%2!=0) v.push_back(a[i]);
        else u.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    sort(u.begin(),u.end(),comp);
    for(int i=0;i<n/2;i++){
        cout << v[i] << " " << u[i] << " ";
    }
    if(v.size()!=u.size()) cout << v[n/2];
}