#include<bits/stdc++.h>
using namespace std;
bool comp(int a ,int b){
    return a>b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    sort(a,a+n,comp);
    for( int i=0;i<x;i++) cout << a[i] << " ";
    cout << "\n";
    }
}